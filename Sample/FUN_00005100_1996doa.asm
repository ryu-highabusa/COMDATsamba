                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                               undefined __stdcall Debug_DrawPlayerStateOverlay(void)
             undefined         <UNASSIGNED>   <RETURN>
                                             Debug_DrawPlayerStateOverlay                    XREF[1]:     Debug_UpdateHiddenDisplays:00004
        00005100 00 30 80        lda                       s_mancom_%2X_%2X_00004d00,g0                             = "mancom     %2X      %2X\n"
                 8c 00 4d 
                 00 00
        00005108 00 30 88        ldob                      g_player1,g1
                 80 00 fc 
                 54 00
        00005110 00 30 90        ldob                      g_player2,g2
                 80 58 fc 
                 54 00
        00005118 28 96 08 09     call                      FUN_0008e740                                             undefined FUN_0008e740(undefined4 param_1, undefined4 param
        0000511c 00 30 80        lda                       s_chrnum_%2X_%2X_00004d20,g0                             = "chrnum     %2X      %2X\n"
                 8c 20 4d 
                 00 00
        00005124 00 30 88        ldob                      CHAR_NUM_P1_0054fc01*,g1
                 80 01 fc 
                 54 00
        0000512c 00 30 90        ldob                      CHAR_NUM_P2_0054fc59*,g2
                 80 59 fc 
                 54 00
        00005134 0c 96 08 09     call                      FUN_0008e740                                             undefined FUN_0008e740(undefined4 param_1, undefined4 param
        00005138 00 30 80        lda                       s_chrcol_%2X_%2X_00004d40,g0                             = "chrcol     %2X      %2X\n"
                 8c 40 4d 
                 00 00
        00005140 00 30 88        ldob                      CHAR_COL_P1_0054fc02,g1
                 80 02 fc 
                 54 00
        00005148 00 30 90        ldob                      CHAR_COL_P2_0054fc5a,g2
                 80 5a fc 
                 54 00
        00005150 f0 95 08 09     call                      FUN_0008e740                                             undefined FUN_0008e740(undefined4 param_1, undefined4 param
        00005154 00 30 90        ld                        XPOS_P1_0054fc04,g2
                 90 04 fc 
                 54 00
        0000515c 00 30 a0        ld                        XPOS_P2_0054fc5c,g4
                 90 5c fc 
                 54 00
        00005164 00 30 80        lda                       s_Xpos_%6.2f_%6.2f_00004d60,g0                           = "Xpos   %6.2f  %6.2f\n"
                 8c 60 4d 
                 00 00
        0000516c 92 34 08 6c     movr                      g2,fp1
        00005170 81 1c 90 6d     movrl                     fp1,g2
        00005174 94 34 08 6c     movr                      g4,fp1
        00005178 81 1c a0 6d     movrl                     fp1,g4
        0000517c c4 95 08 09     call                      FUN_0008e740                                             undefined FUN_0008e740(undefined4 param_1, undefined4 param
        00005180 00 30 90        ld                        YPOS_P1_0054fc08,g2
                 90 08 fc 
                 54 00
        00005188 00 30 a0        ld                        YPOS_P2_0054fc60,g4
                 90 60 fc 
                 54 00
        00005190 00 30 80        lda                       s_Ypos_%6.2f_%6.2f_00004d80,g0                           = "Ypos   %6.2f  %6.2f\n"
                 8c 80 4d 
                 00 00
        00005198 92 34 08 6c     movr                      g2,fp1
        0000519c 81 1c 90 6d     movrl                     fp1,g2
        000051a0 94 34 08 6c     movr                      g4,fp1
        000051a4 81 1c a0 6d     movrl                     fp1,g4
        000051a8 98 95 08 09     call                      FUN_0008e740                                             undefined FUN_0008e740(undefined4 param_1, undefined4 param
        000051ac 00 30 90        ld                        ZPOS_P1_0054fc0c,g2
                 90 0c fc 
                 54 00
        000051b4 00 30 a0        ld                        ZPOS_P2_0054fc64,g4
                 90 64 fc 
                 54 00
        000051bc 00 30 80        lda                       s_Zpos_%6.2f_%6.2f_00004da0,g0                           = "Zpos   %6.2f  %6.2f\n"
                 8c a0 4d 
                 00 00
        000051c4 92 34 08 6c     movr                      g2,fp1
        000051c8 81 1c 90 6d     movrl                     fp1,g2
        000051cc 94 34 08 6c     movr                      g4,fp1
        000051d0 81 1c a0 6d     movrl                     fp1,g4
        000051d4 6c 95 08 09     call                      FUN_0008e740                                             undefined FUN_0008e740(undefined4 param_1, undefined4 param
        000051d8 00 30 a0        ldos                      DIRECT_P1_0054fc14,g4
                 88 14 fc 
                 54 00
        000051e0 14 32 00 67     cvtir                     g4,fp0
        000051e4 00 1e 20 5c     mov                       0x0,r4
        000051e8 00 30 28        lda                       7.5,r5
                 8c 00 00 
                 f0 40
        000051f0 84 15 b0 79     divrl                     r4,fp0,g6
        000051f4 00 1e 30 5c     mov                       0x0,r6
        000051f8 00 30 38        lda                       3.8515625,r7
                 8c 00 80 
                 76 40
        00005200 16 86 b1 79     mulrl                     g6,r6,g6
        00005204 96 34 08 6d     movrl                     g6,fp1
        00005208 81 1c b0 6c     movr                      fp1,g6
        0000520c 00 30 a0        ldos                      DIRECT_P2_0054fc6c,g4
                 88 6c fc 
                 54 00
        00005214 14 32 00 67     cvtir                     g4,fp0
        00005218 84 15 a0 79     divrl                     r4,fp0,g4
        0000521c 14 86 a1 79     mulrl                     g4,r6,g4
        00005220 94 34 08 6d     movrl                     g4,fp1
        00005224 81 1c a0 6c     movr                      fp1,g4
        00005228 00 30 80        lda                       s_drct_%3d_%3d_00004dc0,g0                               = "drct      %3d     %3d\n"
                 8c c0 4d 
                 00 00
        00005230 16 11 88 6c     cvtzri                    g6,g1
        00005234 14 11 90 6c     cvtzri                    g4,g2
        00005238 08 95 08 09     call                      FUN_0008e740                                             undefined FUN_0008e740(undefined4 param_1, undefined4 param
        0000523c 00 30 a0        ldos                      ATK_DIR_P1_0054fc18,g4
                 88 18 fc 
                 54 00
        00005244 14 32 00 67     cvtir                     g4,fp0
        00005248 84 15 b0 79     divrl                     r4,fp0,g6
        0000524c 16 86 b1 79     mulrl                     g6,r6,g6
        00005250 96 34 08 6d     movrl                     g6,fp1
        00005254 81 1c b0 6c     movr                      fp1,g6
        00005258 00 30 a0        ldos                      ATK_DIR_P2_0054fc70,g4
                 88 70 fc 
                 54 00
        00005260 14 32 00 67     cvtir                     g4,fp0
        00005264 84 15 a0 79     divrl                     r4,fp0,g4
        00005268 14 86 a1 79     mulrl                     g4,r6,g4
        0000526c 94 34 08 6d     movrl                     g4,fp1
        00005270 81 1c a0 6c     movr                      fp1,g4
        00005274 00 30 80        lda                       s_atkdrct_%3d_%3d_00004de0,g0                            = "atkdrct   %3d     %3d\n"
                 8c e0 4d 
                 00 00
        0000527c 16 11 88 6c     cvtzri                    g6,g1
        00005280 14 11 90 6c     cvtzri                    g4,g2
        00005284 bc 94 08 09     call                      FUN_0008e740                                             undefined FUN_0008e740(undefined4 param_1, undefined4 param
        00005288 00 30 a0        ldos                      BODY_DIR_P1_0054fc1c,g4
                 88 1c fc 
                 54 00
        00005290 14 32 00 67     cvtir                     g4,fp0
        00005294 84 15 b0 79     divrl                     r4,fp0,g6
        00005298 16 86 b1 79     mulrl                     g6,r6,g6
        0000529c 96 34 08 6d     movrl                     g6,fp1
        000052a0 81 1c b0 6c     movr                      fp1,g6
        000052a4 00 30 a0        ldos                      BODY_DIR_P2_0054fc74,g4
                 88 74 fc 
                 54 00
        000052ac 14 32 00 67     cvtir                     g4,fp0
        000052b0 84 15 20 79     divrl                     r4,fp0,r4
        000052b4 04 86 21 79     mulrl                     r4,r6,r4
        000052b8 84 34 08 6d     movrl                     r4,fp1
        000052bc 81 1c 20 6c     movr                      fp1,r4
        000052c0 00 30 80        lda                       s_bodydrct_%3d_%3d_00004e00,g0                           = "bodydrct  %3d     %3d\n"
                 8c 00 4e 
                 00 00
        000052c8 16 11 88 6c     cvtzri                    g6,g1
        000052cc 04 11 90 6c     cvtzri                    r4,g2
        000052d0 70 94 08 09     call                      FUN_0008e740                                             undefined FUN_0008e740(undefined4 param_1, undefined4 param
        000052d4 00 30 80        lda                       s_anime_%4X_%4X_00004e20,g0                              = "anime    %4X    %4X\n"
                 8c 20 4e 
                 00 00
        000052dc 00 30 88        ldos                      ANIME_P1_0054fc28,g1
                 88 28 fc 
                 54 00
        000052e4 00 30 90        ldos                      ANIME_P2_0054fc80,g2
                 88 80 fc 
                 54 00
        000052ec 54 94 08 09     call                      FUN_0008e740                                             undefined FUN_0008e740(undefined4 param_1, undefined4 param
        000052f0 00 30 80        lda                       s_actcodeflg_%2X_%2X_00004e40,g0                         = "actcodeflg %2X      %2X\n"
                 8c 40 4e 
                 00 00
        000052f8 00 30 88        ldob                      ACT_FLAG_P1_0054fc2b,g1
                 80 2b fc 
                 54 00
        00005300 00 30 90        ldob                      ACT_FLAG_P2_0054fc83,g2
                 80 83 fc 
                 54 00
        00005308 38 94 08 09     call                      FUN_0008e740                                             undefined FUN_0008e740(undefined4 param_1, undefined4 param
        0000530c 00 30 80        lda                       s_updownhead_%2X_%2X_00004e60,g0                         = "updownhead %2X      %2X\n"
                 8c 60 4e 
                 00 00
        00005314 00 30 88        ldob                      UpsideDownHead_P1_0054fc30,g1
                 80 30 fc 
                 54 00
        0000531c 00 30 90        ldob                      UpsideDownHead_P2_0054fc88,g2
                 80 88 fc 
                 54 00
        00005324 1c 94 08 09     call                      FUN_0008e740                                             undefined FUN_0008e740(undefined4 param_1, undefined4 param
        00005328 00 30 80        lda                       s_attackpoint%2X_%2X_00004e80,g0                         = "attackpoint%2X      %2X\n"
                 8c 80 4e 
                 00 00
        00005330 00 30 88        ldob                      ATK_POINT_P1_0054fc32,g1
                 80 32 fc 
                 54 00
        00005338 00 30 90        ldob                      ATK_POINT_P2_0054fc8a,g2
                 80 8a fc 
                 54 00
        00005340 00 94 08 09     call                      FUN_0008e740                                             undefined FUN_0008e740(undefined4 param_1, undefined4 param
        00005344 00 30 80        lda                       s_attacksta_%2X_%2X_00004ea0,g0                          = "attacksta  %2X      %2X\n"
                 8c a0 4e 
                 00 00
        0000534c 00 30 88        ldob                      ATK_STA_P1_0054fc33,g1
                 80 33 fc 
                 54 00
        00005354 00 30 90        ldob                      ATK_STA_P2_0054fc8b,g2
                 80 8b fc 
                 54 00
        0000535c e4 93 08 09     call                      FUN_0008e740                                             undefined FUN_0008e740(undefined4 param_1, undefined4 param
        00005360 00 30 80        lda                       s_animeflip_%2X_%2X_00004ec0,g0                          = "animeflip  %2X      %2X\n"
                 8c c0 4e 
                 00 00
        00005368 00 30 88        ldib                      ANIM_FLIP_P1_0054fc34,g1
                 c0 34 fc 
                 54 00
        00005370 00 30 90        ldib                      ANIM_FLIP_P2_0054fc8c,g2
                 c0 8c fc 
                 54 00
        00005378 c8 93 08 09     call                      FUN_0008e740                                             undefined FUN_0008e740(undefined4 param_1, undefined4 param
        0000537c 00 30 80        lda                       s_animeflg_%2X_%2X_00004ee0,g0                           = "animeflg   %2X      %2X\n"
                 8c e0 4e 
                 00 00
        00005384 00 30 88        ldob                      ANIM_FLAG_P1_0054fc35,g1
                 80 35 fc 
                 54 00
        0000538c 00 30 90        ldob                      ANIM_FLAG_P2_0054fc8d,g2
                 80 8d fc 
                 54 00
        00005394 ac 93 08 09     call                      FUN_0008e740                                             undefined FUN_0008e740(undefined4 param_1, undefined4 param
        00005398 00 30 80        lda                       s_hitattack_%2X_%2X_00004f00,g0                          = "hitattack  %2X      %2X\n"
                 8c 00 4f 
                 00 00
        000053a0 00 30 88        ldob                      HIT_ATK_P1_0054fc37,g1
                 80 37 fc 
                 54 00
        000053a8 00 30 90        ldob                      HIT_ATK_P2_0054fc8f,g2
                 80 8f fc 
                 54 00
        000053b0 90 93 08 09     call                      FUN_0008e740                                             undefined FUN_0008e740(undefined4 param_1, undefined4 param
        000053b4 00 30 80        lda                       s_hitbody_%2X_%2X_00004f20,g0                            = "hitbody    %2X      %2X\n"
                 8c 20 4f 
                 00 00
        000053bc 00 30 88        ldob                      HIT_BODY_P1_0054fc38,g1
                 80 38 fc 
                 54 00
        000053c4 00 30 90        ldob                      HIT_BODY_P2_0054fc90,g2
                 80 90 fc 
                 54 00
        000053cc 74 93 08 09     call                      FUN_0008e740                                             undefined FUN_0008e740(undefined4 param_1, undefined4 param
        000053d0 00 30 80        lda                       s_hitstage_%2X_%2X_00004f40,g0                           = "hitstage   %2X      %2X\n"
                 8c 40 4f 
                 00 00
        000053d8 00 30 88        ldob                      HIT_STAGE_P1_0054fc39,g1
                 80 39 fc 
                 54 00
        000053e0 00 30 90        ldob                      HIT_STAGE_P2_0054fc91,g2
                 80 91 fc 
                 54 00
        000053e8 58 93 08 09     call                      FUN_0008e740                                             undefined FUN_0008e740(undefined4 param_1, undefined4 param
        000053ec 00 30 80        lda                       s_beatsta_%2X_%2X_00004f60,g0                            = "beatsta    %2X      %2X\n"
                 8c 60 4f 
                 00 00
        000053f4 00 30 88        ldob                      BEAT_STA_P1_0054fc3e,g1
                 80 3e fc 
                 54 00
        000053fc 00 30 90        ldob                      BEAT_STA_P2_0054fc96,g2
                 80 96 fc 
                 54 00
        00005404 3c 93 08 09     call                      FUN_0008e740                                             undefined FUN_0008e740(undefined4 param_1, undefined4 param
        00005408 00 30 80        lda                       s_skysta_%2X_%2X_00004f80,g0                             = "skysta     %2X      %2X\n"
                 8c 80 4f 
                 00 00
        00005410 00 30 88        ldob                      SKY_STA_P1_0054fc3f,g1
                 80 3f fc 
                 54 00
        00005418 00 30 90        ldob                      SKY_STA_P2_0054fc97,g2
                 80 97 fc 
                 54 00
        00005420 20 93 08 09     call                      FUN_0008e740                                             undefined FUN_0008e740(undefined4 param_1, undefined4 param
        00005424 00 30 80        lda                       s_downhit_%2X_%2X_00004fa0,g0                            = "downhit    %2X      %2X\n"
                 8c a0 4f 
                 00 00
        0000542c 00 30 88        ldob                      DOWN_HIT_P1_0054fc40,g1
                 80 40 fc 
                 54 00
        00005434 00 30 90        ldob                      DOWN_HIT_P2_0054fc98,g2
                 80 98 fc 
                 54 00
        0000543c 04 93 08 09     call                      FUN_0008e740                                             undefined FUN_0008e740(undefined4 param_1, undefined4 param
        00005440 00 30 80        lda                       s_actcancel_%2X_%2X_00004fc0,g0                          = "actcancel  %2X      %2X\n"
                 8c c0 4f 
                 00 00
        00005448 00 30 88        ldob                      ACT_CANCEL_P1_0054fc41,g1
                 80 41 fc 
                 54 00
        00005450 00 30 90        ldob                      ACT_CANCEL_P2_0054fc99,g2
                 80 99 fc 
                 54 00
        00005458 e8 92 08 09     call                      FUN_0008e740                                             undefined FUN_0008e740(undefined4 param_1, undefined4 param
        0000545c 00 30 80        lda                       s_graspsta_%2X_%2X_00004fe0,g0                           = "graspsta   %2X      %2X\n"
                 8c e0 4f 
                 00 00
        00005464 00 30 88        ldob                      GRASP_STA_P1_0054fc42,g1
                 80 42 fc 
                 54 00
        0000546c 00 30 90        ldob                      GRASP_STA_P2_0054fc9a,g2
                 80 9a fc 
                 54 00
        00005474 cc 92 08 09     call                      FUN_0008e740                                             undefined FUN_0008e740(undefined4 param_1, undefined4 param
        00005478 00 30 80        lda                       s_dwnasta_%2X_%2X_00005000,g0                            = "dwnasta    %2X      %2X\n"
                 8c 00 50 
                 00 00
        00005480 00 30 88        ldob                      DWNA_STA_P1_0054fc43,g1
                 80 43 fc 
                 54 00
        00005488 00 30 90        ldob                      DWNA_STA_P2_0054fc9b,g2
                 80 9b fc 
                 54 00
        00005490 b0 92 08 09     call                      FUN_0008e740                                             undefined FUN_0008e740(undefined4 param_1, undefined4 param
        00005494 00 30 80        lda                       s_mountsta_%2X_%2X_00005020,g0                           = "mountsta   %2X      %2X\n"
                 8c 20 50 
                 00 00
        0000549c 00 30 88        ldob                      MOUNT_STA_P1_0054fc44,g1                                 0 Normal/unconstrained or no mounting directive
                 80 44 fc                                                                                           1 Ground-mounted/ground-anchored animation
                 54 00                                                                                              2 UNKNOWN
                                                                                                                    3 Airborne/unmounted root motion
        000054a4 00 30 90        ldob                      MOUNT_STA_P2_0054fc9c,g2
                 80 9c fc 
                 54 00
        000054ac 94 92 08 09     call                      FUN_0008e740                                             undefined FUN_0008e740(undefined4 param_1, undefined4 param
        000054b0 00 30 80        lda                       s_atkheight_%2X_%2X_00005040,g0                          = "atkheight  %2X      %2X\n"
                 8c 40 50 
                 00 00
        000054b8 00 30 88        ldob                      ATK_HEIGHT_P1_0054fc46,g1
                 80 46 fc 
                 54 00
        000054c0 00 30 90        ldob                      ATK_HEIGHT_P2_0054fc9e,g2
                 80 9e fc 
                 54 00
        000054c8 78 92 08 09     call                      FUN_0008e740                                             undefined FUN_0008e740(undefined4 param_1, undefined4 param
        000054cc 00 30 80        lda                       s_ringhit_%2X_%2X_00005060,g0                            = "ringhit    %2X      %2X\n"
                 8c 60 50 
                 00 00
        000054d4 00 30 88        ldob                      RING_HIT_P1_0054fc47,g1
                 80 47 fc 
                 54 00
        000054dc 00 30 90        ldob                      RING_HIT_P2_0054fc9f,g2
                 80 9f fc 
                 54 00
        000054e4 5c 92 08 09     call                      FUN_0008e740                                             undefined FUN_0008e740(undefined4 param_1, undefined4 param
        000054e8 00 30 80        lda                       s_drctajstflg%2X_%2X_00005080,g0                         = "drctajstflg%2X      %2X\n"
                 8c 80 50 
                 00 00
        000054f0 00 30 88        ldob                      DIR_AJST_P1_0054fc4a,g1
                 80 4a fc 
                 54 00
        000054f8 00 30 90        ldob                      DIR_AJST_P2_0054fca2,g2
                 80 a2 fc 
                 54 00
        00005500 40 92 08 09     call                      FUN_0008e740                                             undefined FUN_0008e740(undefined4 param_1, undefined4 param
        00005504 00 30 80        lda                       s_damagenum_%2X_%2X_000050a0,g0                          = "damagenum  %2X      %2X\n"
                 8c a0 50 
                 00 00
        0000550c 00 30 88        ldob                      DAMAGE_NUM_P1_0054fc4b,g1
                 80 4b fc 
                 54 00
        00005514 00 30 90        ldob                      DAMAGE_NUM_P2_0054fca3,g2
                 80 a3 fc 
                 54 00
        0000551c 24 92 08 09     call                      FUN_0008e740                                             undefined FUN_0008e740(undefined4 param_1, undefined4 param
        00005520 00 30 80        lda                       s_hitgrasp_%2X_%2X_000050c0,g0                           = "hitgrasp   %2X      %2X\n"
                 8c c0 50 
                 00 00
        00005528 00 30 88        ldob                      HIT_GRASP_P1_0054fc4d,g1                                 "Hold Level" / "Hit Grasp Level"
                 80 4d fc 
                 54 00
        00005530 00 30 90        ldob                      HIT_GRASP_P2_0054fca5,g2                                 0x4 High Punch
                 80 a5 fc                                                                                           0x5 High Kick
                 54 00                                                                                              0x6 Mid Punch
                                                                                                                    0x7 Mid Kick
                                                                                                                    0x8 Low Punch
                                                                                                                    0x9 Low Kick
        00005538 08 92 08 09     call                      FUN_0008e740                                             undefined FUN_0008e740(undefined4 param_1, undefined4 param
        0000553c 00 30 80        lda                       s_a.c.use_%2X_%2X_000050e0,g0                            = "a.c.use    %2X      %2X\n"
                 8c e0 50 
                 00 00
        00005544 00 30 88        ldob                      CANCELUSE_P1_0054fc55,g1
                 80 55 fc 
                 54 00
        0000554c 00 30 90        ldob                      CANCELUSE_P2_0054fcad,g2
                 80 ad fc 
                 54 00
                                             LAB_00005554                                    XREF[1]:     FUN_00026950:00026a30(*)  
        00005554 ec 91 08 09     call                      FUN_0008e740                                             undefined FUN_0008e740(undefined4 param_1, undefined4 param
        00005558 00 00 00 0a     ret
        0000555c 00 00 00 00     ddw                       0h
                                             LAB_00005560                                    XREF[1]:     Game_InitializeAndRunMainLoop:00
        00005560 00 30 f0        stob                      g14,breakthechamptextflag                                = 00h
                 82 e8 f3 
                 54 00
        00005568 00 30 f0        stos                      g14,DAT_0054f3e4
                 8a e4 f3 
                 54 00
        00005570 00 30 f0        st                        g14,DWORD_0054f3e0
                 92 e0 f3 
                 54 00
        00005578 ff 00 88 8c     lda                       0xff,g1
        0000557c 00 30 88        stob                      g1,DAT_0054f3e7
                 82 e7 f3 
                 54 00
        00005584 00 30 88        stob                      g1,g_championDisplayValue_candidate                      = 00h
                 82 e6 f3 
                 54 00
        0000558c 00 30 f0        stob                      g14,DAT_0054f3e9
                 82 e9 f3 
                 54 00
        00005594 00 30 f0        stob                      g14,DAT_0054f3ec
                 82 ec f3 
                 54 00
                                             LAB_0000559c                                    XREF[6]:     00005610(j), 00005628(j), 
                                                                                                          0000562c(j), 00005634(j), 
                                                                                                          0000563c(j), 00005644(j)  
        0000559c 00 30 a0        ldob                      GameMode,g4
                 80 b3 fc 
                 54 00
        000055a4 00 30 a0        stob                      g4,DAT_0054f3ea
                 82 ea f3 
                 54 00
        000055ac 00 30 a0        ldob                      BYTE_0054fcfd,g4
                 80 fd fc 
                 54 00
        000055b4 00 30 a0        stob                      g4,DAT_0054f3eb
                 82 eb f3 
                 54 00
        000055bc 00 30 a0        ldob                      BYTE_0054fd85,g4
                 80 85 fd 
                 54 00
        000055c4 00 30 a0        stob                      g4,DAT_0054f3ec
                 82 ec f3 
                 54 00
        000055cc 01 1e 80 5c     mov                       0x1,g0
        000055d0 80 2c 00 09     call                      FUN_00008250                                             undefined FUN_00008250(uint param_1)
        000055d4 00 30 88        lda                       IOBASE_01c00000,g1                                       = 00FFh
                 8c 00 00 
                 c0 01
        000055dc 00 30 88        st                        g1=>IOBASE_01c00000,DWORD_0054f3d8                       = 00FFh
                 92 d8 f3 
                 54 00
        000055e4 00 30 88        lda                       DAT_01c00008,g1                                          = 00FFh
                 8c 08 00 
                 c0 01
        000055ec 00 30 88        st                        g1=>DAT_01c00008,DWORD_0054f3dc                          = 00FFh
                 92 dc f3 
                 54 00
        000055f4 4e 00 88 8c     lda                       0x4e,g1
        000055f8 00 30 88        stos                      g1,DAT_01c00010                                          = 00FFh
                 8a 10 00 
                 c0 01
        00005600 00 30 a0        ldob                      BYTE_0054fd85,g4
                 80 85 fd 
                 54 00
        00005608 0c 20 05 3a     cmpibe                    0x0,g4,LAB_00005614
        0000560c 44 00 00 09     call                      FUN_00005650                                             undefined FUN_00005650(void)
        00005610 8c ff ff 08     b                         LAB_0000559c
                                             LAB_00005614                                    XREF[1]:     00005608(j)  
        00005614 00 30 a0        ldob                      GameMode,g4
                 80 b3 fc 
                 54 00
        0000561c 24 20 0d 3a     cmpibe                    0x1,g4,LAB_00005640
        00005620 0c 20 0d 3c     cmpibl                    0x1,g4,LAB_0000562c
        00005624 14 20 05 3a     cmpibe                    0x0,g4,LAB_00005638
        00005628 74 ff ff 08     b                         LAB_0000559c
                                             LAB_0000562c                                    XREF[1]:     00005620(j)  
        0000562c 70 3f 15 3d     cmpibne                   0x2,g4,LAB_0000559c
        00005630 90 00 00 09     call                      FUN_000056c0                                             undefined FUN_000056c0(void)
        00005634 68 ff ff 08     b                         LAB_0000559c
                                             LAB_00005638                                    XREF[1]:     00005624(j)  
        00005638 38 01 00 09     call                      FUN_00005770                                             undefined FUN_00005770(void)
        0000563c 60 ff ff 08     b                         LAB_0000559c
                                             LAB_00005640                                    XREF[1]:     0000561c(j)  
        00005640 00 02 00 09     call                      FUN_00005840                                             undefined FUN_00005840(void)
        00005644 58 ff ff 08     b                         LAB_0000559c
        00005648 00 00 00 00     ddw                       0h
        0000564c 00 00 00 00     ddw                       0h
