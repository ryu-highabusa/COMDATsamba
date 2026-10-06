                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                               undefined4 __stdcall FUN_0002cee0(undefined4 param_1, un
             undefined4        g0:4           <RETURN>
             undefined4        g0:4           param_1
             undefined4        g1:4           param_2
             undefined4        g2:4           param_3
                             FUN_0002cee0                                    XREF[14]:    FUN_0002cab0:0002cb38(c), 
                                                                                          FUN_0002cab0:0002cb64(c), 
                                                                                          FUN_0002cab0:0002cb90(c), 
                                                                                          FUN_0002cab0:0002cbbc(c), 
                                                                                          FUN_0002cab0:0002cbf4(c), 
                                                                                          FUN_0002cab0:0002cc28(c), 
                                                                                          FUN_0002cab0:0002cc5c(c), 
                                                                                          FUN_0002cc80:0002cd04(c), 
                                                                                          FUN_0002cc80:0002cd5c(c), 
                                                                                          FUN_0002cc80:0002cda4(c), 
                                                                                          FUN_0002cc80:0002cdfc(c), 
                                                                                          FUN_0002cc80:0002ce4c(c), 
                                                                                          FUN_0002cc80:0002ce84(c), 
                                                                                          FUN_0002cc80:0002cebc(c)  
        0002cee0 00 30 a0        lda        DAT_008801e0,g4
                 8c e0 01 
                 88 00
        0002cee8 00 30 98        lda        0x1e1e,g3
                 8c 1e 1e 
                 00 00
        0002cef0 00 10 9d 92     st         g3,(g4)=>DAT_008801e0
        0002cef4 00 30 a0        ld         PTR_DAT_000006a4,g4                              = 00884000
                 90 a4 06 
                 00 00
        0002cefc 00 10 95 92     st         param_3,(g4)=>DAT_00884000
        0002cf00 00 30 a0        ld         PTR_DAT_000006a0,g4                              = 00884000
                 90 a0 06 
                 00 00
        0002cf08 00 10 8d 92     st         param_2,(g4)=>DAT_00884000
        0002cf0c 00 30 a0        ld         PTR_DAT_000006a0,g4                              = 00884000
                 90 a0 06 
                 00 00
        0002cf14 00 10 bd 90     ld         (g4)=>DAT_00884000,g7
        0002cf18 ff 00 98 8c     lda        0xff,g3
        0002cf1c 90 c0 84 58     and        param_1,g3,param_1
        0002cf20 01 0e a4 59     shlo       0x1,param_1,g4
        0002cf24 10 00 a5 59     addo       param_1,g4,g4
        0002cf28 02 0e a5 59     shlo       0x2,g4,g4
        0002cf2c 10 01 a5 59     subo       param_1,g4,g4
        0002cf30 03 0e a5 59     shlo       0x3,g4,g4
        0002cf34 00 30 b0        lda        g_player1,g6
                 8c 00 fc 
                 54 00
        0002cf3c 16 3c ad        ld         0x4 (g4) [g6 * 0x1],g5=>XPOS_P1_0054fc04
                 90 04 00 
                 00 00
        0002cf44 97 47 bd 78     addr       g7,g5,g7
        0002cf48 00 30 a8        lda        DAT_008801d0,g5
                 8c d0 01 
                 88 00
        0002cf50 00 30 98        lda        0x1d1d,g3
                 8c 1d 1d 
                 00 00
        0002cf58 00 50 9d 92     st         g3,(g5)=>DAT_008801d0
        0002cf5c 00 30 a8        ld         PTR_DAT_000006a4,g5                              = 00884000
                 90 a4 06 
                 00 00
        0002cf64 00 50 95 92     st         param_3,(g5)=>DAT_00884000
        0002cf68 00 30 a8        ld         PTR_DAT_000006a0,g5                              = 00884000
                 90 a0 06 
                 00 00
        0002cf70 00 50 8d 92     st         param_2,(g5)=>DAT_00884000
        0002cf74 00 30 a8        ld         PTR_DAT_000006a0,g5                              = 00884000
                 90 a0 06 
                 00 00
        0002cf7c 00 50 ad 90     ld         (g5)=>DAT_00884000,g5
        0002cf80 16 3c a5        ld         0xc (g4) [g6 * 0x1],g4=>ZPOS_P1_0054fc0c
                 90 0c 00 
                 00 00
        0002cf88 95 07 ad 78     addr       g5,g4,g5
        0002cf8c 00 30 b0        ld         FLOAT_0054fd7c,g6                                = 0.0
                 90 7c fd 
                 54 00
        0002cf94 1f 88 a5 58     notbit     0x1f,g6,g4
        0002cf98 9e 19 80 58     setbit     0x1e,0x0,param_1
        0002cf9c 90 05 a5 78     divr       param_1,g4,g4
        0002cfa0 97 22 05 68     cmpr       g7,g4
        0002cfa4 34 00 00 14     bl         LAB_0002cfd8
        0002cfa8 90 85 a5 78     divr       param_1,g6,g4
        0002cfac 97 22 05 68     cmpr       g7,g4
        0002cfb0 28 00 00 11     bg         LAB_0002cfd8
        0002cfb4 00 30 b0        ld         FLOAT_0054fd80,g6                                = 0.0
                 90 80 fd 
                 54 00
        0002cfbc 1f 88 a5 58     notbit     0x1f,g6,g4
        0002cfc0 90 05 a5 78     divr       param_1,g4,g4
        0002cfc4 95 22 05 68     cmpr       g5,g4
        0002cfc8 10 00 00 14     bl         LAB_0002cfd8
        0002cfcc 90 85 a5 78     divr       param_1,g6,g4
        0002cfd0 95 22 05 68     cmpr       g5,g4
        0002cfd4 0c 00 00 16     ble        LAB_0002cfe0
                             LAB_0002cfd8                                    XREF[3]:     0002cfa4(j), 0002cfb0(j), 
                                                                                          0002cfc8(j)  
        0002cfd8 01 1e 80 5c     mov        0x1,param_1
        0002cfdc 08 00 00 08     b          LAB_0002cfe4
                             LAB_0002cfe0                                    XREF[1]:     0002cfd4(j)  
        0002cfe0 00 1e 80 5c     mov        0x0,param_1
                             LAB_0002cfe4                                    XREF[1]:     0002cfdc(j)  
        0002cfe4 ff 00 98 8c     lda        0xff,g3
        0002cfe8 90 c0 84 58     and        param_1,g3,param_1
        0002cfec 00 00 00 0a     ret
        0002cff0 00 30 a8        ld         FLOAT_0054fd08,g5                                = 0.0
                 90 08 fd 
                 54 00
        0002cff8 1f 48 a5 58     notbit     0x1f,g5,g4
        0002cffc 9e 19 b0 58     setbit     0x1e,0x0,g6
        0002d000 96 05 a5 78     divr       g6,g4,g4
        0002d004 90 22 05 68     cmpr       g0,g4
        0002d008 34 00 00 14     bl         LAB_0002d03c
        0002d00c 96 45 a5 78     divr       g6,g5,g4
        0002d010 90 22 05 68     cmpr       g0,g4
        0002d014 28 00 00 11     bg         LAB_0002d03c
        0002d018 00 30 a8        ld         FLOAT_0054fd0c,g5                                = 0.0
                 90 0c fd 
                 54 00
        0002d020 1f 48 a5 58     notbit     0x1f,g5,g4
        0002d024 96 05 a5 78     divr       g6,g4,g4
        0002d028 91 22 05 68     cmpr       g1,g4
        0002d02c 10 00 00 14     bl         LAB_0002d03c
        0002d030 96 45 a5 78     divr       g6,g5,g4
        0002d034 91 22 05 68     cmpr       g1,g4
        0002d038 0c 00 00 16     ble        LAB_0002d044
                             LAB_0002d03c                                    XREF[3]:     0002d008(j), 0002d014(j), 
                                                                                          0002d02c(j)  
        0002d03c 01 1e 80 5c     mov        0x1,g0
        0002d040 08 00 00 08     b          LAB_0002d048
                             LAB_0002d044                                    XREF[1]:     0002d038(j)  
        0002d044 00 1e 80 5c     mov        0x0,g0
                             LAB_0002d048                                    XREF[1]:     0002d040(j)  
        0002d048 ff 00 b8 8c     lda        0xff,g7
        0002d04c 90 c0 85 58     and        g0,g7,g0
        0002d050 00 00 00 0a     ret
        0002d054 00              ??         00h
        0002d055 00              ??         00h
        0002d056 00              ??         00h
        0002d057 00              ??         00h
        0002d058 00              ??         00h
        0002d059 00              ??         00h
        0002d05a 00              ??         00h
        0002d05b 00              ??         00h
        0002d05c 00              ??         00h
        0002d05d 00              ??         00h
        0002d05e 00              ??         00h
        0002d05f 00              ??         00h
