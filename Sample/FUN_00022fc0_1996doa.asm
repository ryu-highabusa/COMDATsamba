                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                               undefined __stdcall FUN_00022fc0(uint param_1, uint para
             undefined         <UNASSIGNED>   <RETURN>
             uint              g0:4           param_1
             uint              g1:4           param_2
             undefined4        g2:4           param_3
             uint              g3:4           param_4
                             FUN_00022fc0                                    XREF[2]:     0001f978(c), 0001f9d8(c)  
        00022fc0 00 1e 30 5c     mov        0x0,r6
        00022fc4 00 1e 70 5c     mov        0x0,r14
        00022fc8 9e 19 78 58     setbit     0x1e,0x0,r15
                             LAB_00022fcc                                    XREF[1]:     0002328c(j)  
        00022fcc 00 1e 38 5c     mov        0x0,r7
        00022fd0 01 8e b1 59     shlo       0x1,r6,g6
        00022fd4 06 80 b5 59     addo       r6,g6,g6
        00022fd8 02 8e a5 59     shlo       0x2,g6,g4
        00022fdc 06 01 a5 59     subo       r6,g4,g4
        00022fe0 94 39 28        lda        g_player1 [g4 * 0x8],r5
                 8c 00 fc 
                 54 00
        00022fe8 06 53 a8 58     xor        r6,0x1,g5
        00022fec 01 4e a5 59     shlo       0x1,g5,g4
        00022ff0 15 00 a5 59     addo       g5,g4,g4
        00022ff4 02 0e a5 59     shlo       0x2,g4,g4
        00022ff8 15 01 a5 59     subo       g5,g4,g4
        00022ffc 94 39 20        lda        g_player1 [g4 * 0x8],r4
                 8c 00 fc 
                 54 00
        00023004 04 8e a5 59     shlo       0x4,g6,g4
        00023008 16 01 a5 59     subo       g6,g4,g4
        0002300c 02 0e a5 59     shlo       0x2,g4,g4
        00023010 00 30 a8        lda        DAT_005552d0,g5
                 8c d0 52 
                 55 00
        00023018 15 3c ed        ld         0xc (g4) [g5 * 0x1]=>DAT_005552dc,g13
                 90 0c 00 
                 00 00
        00023020 15 3c 65        ld         0x14 (g4) [g5 * 0x1]=>DAT_005552e4,r12
                 90 14 00 
                 00 00
        00023028 51 60 a1 80     ldob       0x51 (r5)=>DANGERSET_P1_0054fc51,g4
        0002302c 14 22 05 3d     cmpibne    0x0,g4,LAB_00023240
        00023030 44 60 a1 80     ldob       0x44 (r5)=>MOUNT_STA_P1_0054fc44,g4              0 Normal/unconstrained or no mou
                                                                                             1 Ground-mounted/ground-anchored
                                                                                             2 UNKNOWN
                                                                                             3 Airborne/unmounted root motion
        00023034 54 22 0d 3d     cmpibne    0x1,g4,LAB_00023288
        00023038 08 60 a1 90     ld         0x8 (r5)=>YPOS_P1_0054fc08,g4
        0002303c 94 34 00 6c     movr       g4,fp0
        00023040 80 1c a0 6d     movrl      fp0,g4
        00023044 96 2a 05 69     cmprl      +1.0,g4
        00023048 40 02 00 15     bne        LAB_00023288
        0002304c 47 60 a1 80     ldob       0x47 (r5)=>RING_HIT_P1_0054fc47,g4
        00023050 38 22 3d 3a     cmpibe     0x7,g4,LAB_00023288
        00023054 2d 60 a1 80     ldob       0x2d (r5)=>ACT_STA_P1_0054fc2d,g4
        00023058 1c 20 4d 3a     cmpibe     0x9,g4,LAB_00023074
        0002305c 18 20 7d 3a     cmpibe     0xf,g4,LAB_00023074
        00023060 2d 60 a1 80     ldob       0x2d (r5)=>ACT_STA_P1_0054fc2d,g4
        00023064 f6 20 a5 8c     lda        0xf6 (g4),g4
        00023068 ff 00 68 8c     lda        0xff,r13
        0002306c 94 40 a3 58     and        g4,r13,g4
        00023070 18 22 0d 34     cmpobl     0x1,g4,LAB_00023288
                             LAB_00023074                                    XREF[2]:     00023058(j), 0002305c(j)  
        00023074 01 1e 68 5c     mov        0x1,r13
        00023078 51 60 69 82     stob       r13,0x51 (r5)=>DANGERSET_P1_0054fc51
        0002307c 00 30 a0        ld         FLOAT_0054fd08,g4                                = 0.0
                 90 08 fd 
                 54 00
        00023084 94 34 00 6c     movr       g4,fp0
        00023088 80 1c a0 6d     movrl      fp0,g4
        0002308c 8e 05 95 79     divrl      r14,g4,param_3
        00023090 12 16 50 5c     mov        param_3,r10
        00023094 1f c8 5c 58     notbit     0x1f,param_4,r11
        00023098 04 60 a1 90     ld         0x4 (r5)=>XPOS_P1_0054fc04,g4
        0002309c 94 34 00 6c     movr       g4,fp0
        000230a0 80 1c a0 6d     movrl      fp0,g4
        000230a4 8a 22 05 69     cmprl      r10,g4
        000230a8 74 00 00 11     bg         LAB_0002311c
        000230ac 92 22 05 69     cmprl      param_3,g4
        000230b0 6c 00 00 16     ble        LAB_0002311c
        000230b4 00 30 a0        ld         FLOAT_0054fd0c,g4                                = 0.0
                 90 0c fd 
                 54 00
        000230bc 94 34 00 6c     movr       g4,fp0
        000230c0 80 1c a0 6d     movrl      fp0,g4
        000230c4 8e 05 85 79     divrl      r14,g4,param_1
        000230c8 10 16 40 5c     mov        param_1,r8
        000230cc 1f 48 4c 58     notbit     0x1f,param_2,r9
        000230d0 0c 60 a1 90     ld         0xc (r5)=>ZPOS_P1_0054fc0c,g4
        000230d4 94 34 00 6c     movr       g4,fp0
        000230d8 80 1c b0 6d     movrl      fp0,g6
        000230dc 88 a2 05 69     cmprl      r8,g6
        000230e0 3c 00 00 11     bg         LAB_0002311c
        000230e4 90 a2 05 69     cmprl      param_1,g6
        000230e8 34 00 00 16     ble        LAB_0002311c
        000230ec 9d 34 00 6c     movr       g13,fp0
        000230f0 80 1c b0 6d     movrl      fp0,g6
        000230f4 8a a2 05 69     cmprl      r10,g6
        000230f8 24 00 00 11     bg         LAB_0002311c
        000230fc 92 a2 05 69     cmprl      param_3,g6
        00023100 1c 00 00 16     ble        LAB_0002311c
        00023104 8c 34 00 6c     movr       r12,fp0
        00023108 80 1c b0 6d     movrl      fp0,g6
        0002310c 88 a2 05 69     cmprl      r8,g6
        00023110 0c 00 00 11     bg         LAB_0002311c
        00023114 90 a2 05 69     cmprl      param_1,g6
        00023118 70 01 00 11     bg         LAB_00023288
                             LAB_0002311c                                    XREF[7]:     000230a8(j), 000230b0(j), 
                                                                                          000230e0(j), 000230e8(j), 
                                                                                          000230f8(j), 00023100(j), 
                                                                                          00023110(j)  
        0002311c 2d 60 a1 80     ldob       0x2d (r5)=>ACT_STA_P1_0054fc2d,g4
        00023120 f6 20 a5 8c     lda        0xf6 (g4),g4
        00023124 ff 00 68 8c     lda        0xff,r13
        00023128 94 40 a3 58     and        g4,r13,g4
        0002312c 80 20 0d 34     cmpobl     0x1,g4,LAB_000231ac
        00023130 06 16 80 5c     mov        r6,param_1
        00023134 0c 20 00 09     call       FUN_00025140                                     undefined FUN_00025140(uint para
        00023138 90 40 83 58     and        param_1,r13,param_1
        0002313c b8 20 04 3a     cmpibe     0x0,param_1,LAB_000231f4
        00023140 4b 60 a1 80     ldob       0x4b (r5)=>DAMAGE_NUM_P1_0054fc4b,g4
        00023144 10 20 05 3a     cmpibe     0x0,g4,LAB_00023154
        00023148 4b 60 a1 80     ldob       0x4b (r5)=>DAMAGE_NUM_P1_0054fc4b,g4
        0002314c 00 b4 a1        stob       g4,DAT_00557f80 (r6)
                 82 80 7f 
                 55 00
                             LAB_00023154                                    XREF[1]:     00023144(j)  
        00023154 01 1e 68 5c     mov        0x1,r13
        00023158 49 60 69 82     stob       r13,0x49 (r5)=>DANGERFLG_P1_0054fc49
        0002315c 06 16 80 5c     mov        r6,param_1
        00023160 80 21 00 09     call       FUN_000252e0                                     undefined FUN_000252e0(uint para
        00023164 ff 00 68 8c     lda        0xff,r13
        00023168 90 40 83 58     and        param_1,r13,param_1
        0002316c 10 12 a0 67     cvtir      param_1,g4
        00023170 94 34 00 6c     movr       g4,fp0
        00023174 80 1c a0 6d     movrl      fp0,g4
        00023178 00 30 b0        lda        0x47ae147b,g6                                    89128.961f
                 8c 7b 14 
                 ae 47
        00023180 00 30 b8        lda        0x3fc47ae1,g7                                    1.5350000f
                 8c e1 7a 
                 c4 3f
        00023188 14 86 a5 79     mulrl      g4,g6,g4
        0002318c 00 1e b0 5c     mov        0x0,g6
        00023190 00 30 b8        lda        0x40100000,g7                                    2.25f
                 8c 00 00 
                 10 40
        00023198 94 87 a5 79     addrl      g4,g6,g4
        0002319c 94 34 00 6d     movrl      g4,fp0
        000231a0 80 19 a0 6c     cvtzril    fp0,g4
        000231a4 14 16 38 5c     mov        g4,r7
        000231a8 4c 00 00 08     b          LAB_000231f4
                             LAB_000231ac                                    XREF[1]:     0002312c(j)  
        000231ac 2d 60 a1 80     ldob       0x2d (r5)=>ACT_STA_P1_0054fc2d,g4
        000231b0 38 20 7d 3d     cmpibne    0xf,g4,LAB_000231e8
        000231b4 2d 20 a1 80     ldob       0x2d (r4)=>ACT_STA_P2_0054fc85,g4
        000231b8 3c 20 75 3d     cmpibne    0xe,g4,LAB_000231f4
        000231bc 01 20 a1 80     ldob       0x1 (r4)=>CHAR_NUM_P2_0054fc59*,g4
        000231c0 14 39 20        ld         g_character_combat_record_table_candidate [g4 
                 90 e0 cb 
                 09 00
        000231c8 06 53 80 58     xor        r6,0x1,param_1
        000231cc 14 10 00 09     call       FUN_000241e0                                     undefined FUN_000241e0(uint para
        000231d0 ff 00 68 8c     lda        0xff,r13
        000231d4 90 40 83 58     and        param_1,r13,param_1
        000231d8 10 1d 84 8c     lda        (g0) [g0 * 0x4],param_1
        000231dc 10 3d a1        ldob       0x13 (r4) [param_1 * 0x4],g4
                 80 13 00 
                 00 00
        000231e4 10 20 0d 3d     cmpibne    0x1,g4,LAB_000231f4
                             LAB_000231e8                                    XREF[1]:     000231b0(j)  
        000231e8 01 1e 68 5c     mov        0x1,r13
        000231ec 49 60 69 82     stob       r13,0x49 (r5)=>DANGERFLG_P1_0054fc49
        000231f0 0a 1e 38 5c     mov        0xa,r7
                             LAB_000231f4                                    XREF[4]:     0002313c(j), 000231a8(j), 
                                                                                          000231b8(j), 000231e4(j)  
        000231f4 22 60 a1 88     ldos       0x22 (r5)=>DAMAGE_P1_0054fc22,g4
        000231f8 07 00 a5 59     addo       r7,g4,g4
        000231fc 22 60 a1 8a     stos       g4,0x22 (r5)=>DAMAGE_P1_0054fc22
        00023200 24 60 a1 88     ldos       0x24 (r5)=>LAST_DMG_P1_0054fc24,g4
        00023204 07 00 a5 59     addo       r7,g4,g4
        00023208 24 60 a1 8a     stos       g4,0x24 (r5)=>LAST_DMG_P1_0054fc24
        0002320c 20 60 a9 88     ldos       0x20 (r5)=>HIT_POINT_P1_0054fc20,g5
        00023210 78 60 05 3a     cmpibe     0x0,g5,LAB_00023288
        00023214 22 60 a1 88     ldos       0x22 (r5)=>DAMAGE_P1_0054fc22,g4
        00023218 70 00 ad 31     cmpobg     g5,g4,LAB_00023288
        0002321c 2d 60 a1 80     ldob       0x2d (r5)=>ACT_STA_P1_0054fc2d,g4
        00023220 f6 20 a5 8c     lda        0xf6 (g4),g4
        00023224 ff 00 68 8c     lda        0xff,r13
        00023228 94 40 a3 58     and        g4,r13,g4
        0002322c 5c 20 0d 33     cmpobge    0x1,g4,LAB_00023288
        00023230 03 1e 68 5c     mov        0x3,r13
        00023234 00 30 68        stob       r13,BYTE_0055560f
                 82 0f 56 
                 55 00
        0002323c 4c 00 00 08     b          LAB_00023288
                             LAB_00023240                                    XREF[1]:     0002302c(j)  
        00023240 2d 60 a1 80     ldob       0x2d (r5)=>ACT_STA_P1_0054fc2d,g4
        00023244 1c 20 4d 3a     cmpibe     0x9,g4,LAB_00023260
        00023248 18 20 7d 3a     cmpibe     0xf,g4,LAB_00023260
        0002324c 2d 60 a1 80     ldob       0x2d (r5)=>ACT_STA_P1_0054fc2d,g4
        00023250 f6 20 a5 8c     lda        0xf6 (g4),g4
        00023254 ff 00 68 8c     lda        0xff,r13
        00023258 94 40 a3 58     and        g4,r13,g4
        0002325c 28 20 0d 34     cmpobl     0x1,g4,LAB_00023284
                             LAB_00023260                                    XREF[2]:     00023244(j), 00023248(j)  
        00023260 2d 60 a1 80     ldob       0x2d (r5)=>ACT_STA_P1_0054fc2d,g4
        00023264 f6 20 a5 8c     lda        0xf6 (g4),g4
        00023268 ff 00 68 8c     lda        0xff,r13
        0002326c 94 40 a3 58     and        g4,r13,g4
        00023270 18 20 0d 34     cmpobl     0x1,g4,LAB_00023288
        00023274 86 38 a8        ldob       DAT_00557f79 [r6 * 0x2],g5
                 80 79 7f 
                 55 00
        0002327c 2a 60 a1 80     ldob       0x2a (r5)=>ACT_CODE_P1_0054fc2a,g4
        00023280 08 00 ad 3a     cmpibe     g5,g4,LAB_00023288
                             LAB_00023284                                    XREF[1]:     0002325c(j)  
        00023284 51 60 f1 82     stob       g14,0x51 (r5)=>DANGERSET_P1_0054fc51
                             LAB_00023288                                    XREF[11]:    00023034(j), 00023048(j), 
                                                                                          00023050(j), 00023070(j), 
                                                                                          00023118(j), 00023210(j), 
                                                                                          00023218(j), 0002322c(j), 
                                                                                          0002323c(j), 00023270(j), 
                                                                                          00023280(j)  
        00023288 06 50 30 59     addo       r6,0x1,r6
        0002328c 40 bd 09 3b     cmpibge    0x1,r6,LAB_00022fcc
        00023290 00 00 00 0a     ret
        00023294 00 00 00 00     ddw        0h
        00023298 00 00 00 00     ddw        0h
        0002329c 00 00 00 00     ddw        0h
