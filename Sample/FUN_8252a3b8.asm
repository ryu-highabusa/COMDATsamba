        825121d8 48 01 81 e1     bl         FUN_8252a3b8                                     undefined FUN_8252a3b8()
        825121dc 2f 03 00 00     cmpwi      cr6,r3,0x0
        825121e0 40 9a 00 14     bne        cr6,LAB_825121f4
        825121e8 3b c0 00 12     li         r30,0x12
        825121ec 39 6b 43 c8     addi       r11,r11,0x43c8
        825121f8 3b c0 00 18     li         r30,0x18
        825121fc 39 6b b5 f0     subi       r11,r11,0x4a10
        82512204 2f 1e 00 00     cmpwi      cr6,r30,0x0
        82512208 7f 85 e3 78     or         r5,r28,r28
        8251220c 40 99 00 50     ble        cr6,LAB_8251225c
        82512214 7c e4 58 50     subf       r7,r4,r11
        8251221c 7f c5 f3 78     or         r5,r30,r30
                             LAB_82512220                                    XREF[1]:     82512250(j)  
        82512220 7d 67 4a 14     add        r11,r7,r9
        8251222c 7d 09 03 a6     mtspr      CTR,r8
                             LAB_82512230                                    XREF[1]:     82512240(j)  
        82512230 81 0b 00 00     lwz        r8,0x0(r11)
        82512234 39 6b 00 04     addi       r11,r11,0x4
        82512238 91 0a 00 00     stw        r8,0x0(r10)
        8251223c 39 4a 00 04     addi       r10,r10,0x4
        82512240 42 00 ff f0     bdnz       LAB_82512230
        82512244 3b ff ff ff     subi       r31,r31,0x1
        82512248 39 29 00 28     addi       r9,r9,0x28
        8251224c 2b 1f 00 00     cmplwi     cr6,r31,0x0
        82512250 40 9a ff d0     bne        cr6,LAB_82512220
        82512254 2f 1e 00 18     cmpwi      cr6,r30,0x18
        82512258 40 98 00 54     bge        cr6,LAB_825122ac
        82512260 23 e5 00 18     subfic     r31,r5,0x18
        82512268 54 eb 18 38     rlwinm     r11,r7,0x3,0x0,0x1c
        8251226c 7d 0b 22 14     add        r8,r11,r4
        82512274 38 eb 46 98     addi       r7,r11,0x4698
        82512284 7d 29 03 a6     mtspr      CTR,r9
                             LAB_82512288                                    XREF[1]:     82512298(j)  
        82512288 81 2b 00 00     lwz        r9,0x0(r11)=>Character_Select_LOCKEDCHAR_Value?? = FEh
                                                                                             = 00060012h
        8251228c 39 6b 00 04     addi       r11,r11,0x4
        82512290 91 2a 00 00     stw        r9,0x0(r10)
        82512294 39 4a 00 04     addi       r10,r10,0x4
        82512298 42 00 ff f0     bdnz       LAB_82512288
        8251229c 3b ff ff ff     subi       r31,r31,0x1
        825122a0 39 08 00 28     addi       r8,r8,0x28
        825122a4 2b 1f 00 00     cmplwi     cr6,r31,0x0
        825122a8 40 9a ff d0     bne        cr6,LAB_82512278
                             LAB_825122ac                                    XREF[1]:     82512258(j)  
        825122ac 3d 60 83 02     lis        r11,-0x7cfe
        825122b0 90 9d 00 00     stw        r4,0x0(r29)
        825122b8 93 dd 00 04     stw        r30,0x4(r29)
        825122bc 7f 9f e3 78     or         r31,r28,r28
        825122c0 2f 1e 00 00     cmpwi      cr6,r30,0x0
        825122c8 40 99 01 e8     ble        cr6,LAB_825124b0
                             LAB_825122dc                                    XREF[1]:     825124ac(j)  
        825122dc 89 07 00 00     lbz        r8,0x0(r7)
        825122e0 2f 03 00 00     cmpwi      cr6,r3,0x0
        825122e4 7f 89 e3 78     or         r9,r28,r28
        825122e8 40 9a 00 60     bne        cr6,LAB_82512348
        825122ec 81 7d 00 04     lwz        r11,0x4(r29)
        825122f0 2f 0b 00 00     cmpwi      cr6,r11,0x0
        825122f4 40 99 00 34     ble        cr6,LAB_82512328
        825122f8 7f 8a e3 78     or         r10,r28,r28
                             LAB_825122fc                                    XREF[1]:     82512324(j)  
        825122fc 81 7d 00 00     lwz        r11,0x0(r29)
        82512300 7d 6a 5a 14     add        r11,r10,r11
        82512304 8b 4b 00 00     lbz        r26,0x0(r11)
        82512308 7f 1a 40 00     cmpw       cr6,r26,r8
        8251230c 40 9a 00 08     bne        cr6,LAB_82512314
        82512310 93 8b 00 24     stw        r28,0x24(r11)
                             LAB_82512314                                    XREF[1]:     8251230c(j)  
        82512314 81 7d 00 04     lwz        r11,0x4(r29)
        82512318 39 29 00 01     addi       r9,r9,0x1
        8251231c 39 4a 00 28     addi       r10,r10,0x28
        82512320 7f 09 58 00     cmpw       cr6,r9,r11
        82512324 41 98 ff d8     blt        cr6,LAB_825122fc
                             LAB_82512328                                    XREF[1]:     825122f4(j)  
        82512328 89 47 00 01     lbz        r10,0x1(r7)
        8251232c 2b 0a 00 00     cmplwi     cr6,r10,0x0
        82512330 41 9a 01 6c     beq        cr6,LAB_8251249c
        82512334 89 27 00 02     lbz        r9,0x2(r7)
        82512338 2b 09 00 00     cmplwi     cr6,r9,0x0
        8251233c 41 9a 00 5c     beq        cr6,LAB_82512398
        82512340 7c 8b 23 78     or         r11,r4,r4
                             LAB_82512348                                    XREF[1]:     825122e8(j)  
        82512348 81 5d 00 04     lwz        r10,0x4(r29)
        8251234c 2f 0a 00 00     cmpwi      cr6,r10,0x0
        82512350 40 99 00 34     ble        cr6,LAB_82512384
        82512354 7f 8a e3 78     or         r10,r28,r28
                             LAB_82512358                                    XREF[1]:     82512380(j)  
        82512358 81 7d 00 00     lwz        r11,0x0(r29)
        8251235c 7d 6a 5a 14     add        r11,r10,r11
        82512360 8b 4b 00 00     lbz        r26,0x0(r11)
        82512364 7f 1a 40 00     cmpw       cr6,r26,r8
        82512368 40 9a 00 08     bne        cr6,LAB_82512370
        8251236c 90 8b 00 24     stw        r4,0x24(r11)
                             LAB_82512370                                    XREF[1]:     82512368(j)  
        82512370 81 7d 00 04     lwz        r11,0x4(r29)
        82512374 39 29 00 01     addi       r9,r9,0x1
        82512378 39 4a 00 28     addi       r10,r10,0x28
        8251237c 7f 09 58 00     cmpw       cr6,r9,r11
        82512380 41 98 ff d8     blt        cr6,LAB_82512358
                             LAB_82512384                                    XREF[1]:     82512350(j)  
        82512384 89 47 00 02     lbz        r10,0x2(r7)
        82512388 2b 0a 00 00     cmplwi     cr6,r10,0x0
        8251238c 41 9a 00 90     beq        cr6,LAB_8251241c
        82512390 7c 8b 23 78     or         r11,r4,r4
                             LAB_82512398                                    XREF[1]:     8251233c(j)  
        82512398 89 67 00 00     lbz        r11,0x0(r7)
        8251239c 2b 0b 00 18     cmplwi     cr6,r11,0x18
        825123a0 41 99 00 fc     bgt        cr6,LAB_8251249c
        825123a4 7d 6b f0 ae     lbzx       r11,r11,r30=>BYTE_82c4a038
        825123a8 2f 0b 00 17     cmpwi      cr6,r11,0x17
        825123b0 7d 1b 5a 14     add        r8,r27,r11
        825123b4 89 68 3f d9     lbz        r11,0x3fd9(r8)
        825123b8 2b 0b 00 00     cmplwi     cr6,r11,0x0
        825123bc 7c 8b 23 78     or         r11,r4,r4
        825123c0 40 9a 00 08     bne        cr6,LAB_825123c8
                             LAB_825123c4                                    XREF[1]:     825123ac(j)  
        825123c4 7f 8b e3 78     or         r11,r28,r28
        825123d0 41 9a 00 cc     beq        cr6,LAB_8251249c
        825123d4 81 5d 00 04     lwz        r10,0x4(r29)
        825123d8 7f 89 e3 78     or         r9,r28,r28
        825123dc 89 07 00 00     lbz        r8,0x0(r7)
        825123e0 2f 0a 00 00     cmpwi      cr6,r10,0x0
        825123e4 40 99 00 b8     ble        cr6,LAB_8251249c
        825123e8 7f 8a e3 78     or         r10,r28,r28
                             LAB_825123ec                                    XREF[1]:     82512414(j)  
        825123ec 81 7d 00 00     lwz        r11,0x0(r29)
        825123f0 7d 6a 5a 14     add        r11,r10,r11
        825123f4 8b 4b 00 00     lbz        r26,0x0(r11)
        825123f8 7f 1a 40 00     cmpw       cr6,r26,r8
        825123fc 40 9a 00 08     bne        cr6,LAB_82512404
        82512400 90 ab 00 24     stw        r5,0x24(r11)
                             LAB_82512404                                    XREF[1]:     825123fc(j)  
        82512404 81 7d 00 04     lwz        r11,0x4(r29)
        82512408 39 29 00 01     addi       r9,r9,0x1
        8251240c 39 4a 00 28     addi       r10,r10,0x28
        82512410 7f 09 58 00     cmpw       cr6,r9,r11
        82512414 41 98 ff d8     blt        cr6,LAB_825123ec
                             LAB_8251241c                                    XREF[1]:     8251238c(j)  
        8251241c 89 67 00 00     lbz        r11,0x0(r7)
        82512420 2b 0b 00 18     cmplwi     cr6,r11,0x18
        82512424 41 99 00 78     bgt        cr6,LAB_8251249c
        82512428 7d 6b f0 ae     lbzx       r11,r11,r30=>BYTE_82c4a038
        8251242c 2f 0b 00 17     cmpwi      cr6,r11,0x17
        82512434 7d 3b 5a 14     add        r9,r27,r11
        82512438 7c 8b 23 78     or         r11,r4,r4
        8251243c 89 09 3f d9     lbz        r8,0x3fd9(r9)
        82512440 2b 08 00 00     cmplwi     cr6,r8,0x0
        82512444 40 9a 00 08     bne        cr6,LAB_8251244c
                             LAB_82512448                                    XREF[1]:     82512430(j)  
        82512448 7f 8b e3 78     or         r11,r28,r28
        82512454 41 9a 00 48     beq        cr6,LAB_8251249c
        82512458 81 7d 00 04     lwz        r11,0x4(r29)
        8251245c 7f 89 e3 78     or         r9,r28,r28
        82512460 89 07 00 00     lbz        r8,0x0(r7)
        82512464 2f 0b 00 00     cmpwi      cr6,r11,0x0
        82512468 40 99 00 34     ble        cr6,LAB_8251249c
        8251246c 7f 8a e3 78     or         r10,r28,r28
                             LAB_82512470                                    XREF[1]:     82512498(j)  
        82512470 81 7d 00 00     lwz        r11,0x0(r29)
        82512474 7d 6a 5a 14     add        r11,r10,r11
        82512478 8b 4b 00 00     lbz        r26,0x0(r11)
        8251247c 7f 1a 40 00     cmpw       cr6,r26,r8
        82512480 40 9a 00 08     bne        cr6,LAB_82512488
        82512484 90 ab 00 24     stw        r5,0x24(r11)
                             LAB_82512488                                    XREF[1]:     82512480(j)  
        82512488 81 7d 00 04     lwz        r11,0x4(r29)
        8251248c 39 29 00 01     addi       r9,r9,0x1
        82512490 39 4a 00 28     addi       r10,r10,0x28
        82512494 7f 09 58 00     cmpw       cr6,r9,r11
        82512498 41 98 ff d8     blt        cr6,LAB_82512470
                             LAB_8251249c                                    XREF[8]:     82512330(j), 825123a0(j), 
                                                                                          825123d0(j), 825123e4(j), 
                                                                                          82512418(j), 82512424(j), 
                                                                                          82512454(j), 82512468(j)  
        8251249c 81 5d 00 04     lwz        r10,0x4(r29)
        825124a0 3b ff 00 01     addi       r31,r31,0x1
        825124a4 38 e7 00 28     addi       r7,r7,0x28
        825124a8 7f 1f 50 00     cmpw       cr6,r31,r10
        825124ac 41 98 fe 30     blt        cr6,LAB_825122dc
        825124bc 7d 49 03 a6     mtspr      CTR,r10
                             LAB_825124c0                                    XREF[1]:     825124c8(j)  
        825124c0 99 2b 00 00     stb        r9,0x0(r11)
        825124c4 39 6b 00 01     addi       r11,r11,0x1
        825124c8 42 00 ff f8     bdnz       LAB_825124c0
        825124d0 7f 8b e3 78     or         r11,r28,r28
        825124d4 39 3b 3f c2     addi       r9,r27,0x3fc2
                             LAB_825124dc                                    XREF[1]:     825124f0(j)  
        825124dc 7d 09 58 ae     lbzx       r8,r9,r11
        825124e0 7c eb 50 ae     lbzx       r7,r11,r10=>CHAR-TABLE_ALT                       = 1h
        825124e4 39 6b 00 01     addi       r11,r11,0x1
        825124e8 2f 0b 00 17     cmpwi      cr6,r11,0x17
        825124ec 7d 07 31 ae     stbx       r8,r7,r6
        825124f0 41 98 ff ec     blt        cr6,LAB_825124dc
        829eed30 4e 80 00 20     blr
