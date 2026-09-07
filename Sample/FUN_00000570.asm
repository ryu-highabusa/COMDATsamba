                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                             undefined __stdcall FUN_00000570(void)
             undefined         g0:1           <RETURN>
                             FUN_00000570                                    XREF[2]:     00000510(c), 
                                                                                          FUN_00000520:00000530(R)  
        00000570 01 1e 90 5c     mov        0x1,g2                            ; Move the value 1 into register g2
                             LAB_00000574                                    XREF[1]:     FUN_00000520:00000530(R)  
        00000574 00 30 90        stob       g2,DAT_0054fad4                   ; Store byte from g2 into memory location DAT_0054fad4
                 82 d4 fa 
                 54 00
        0000057c d4 00 00 09     call       FUN_00000650                      ; Call function FUN_00000650
        00000580 00 11 00 09     call       FUN_00001680                      ; Call function FUN_00001680
        00000584 00 30 f0        st         g14,DAT_0054b170                  ; Store value of g14 into memory location DAT_0054b170
                 92 70 b1 
                 54 00
        0000058c 00 30 a0        lda        DAT_00e80004,g4                   ; Load address DAT_00e80004 into g4
                 8c 04 00 
                 e8 00
        00000594 00 30 a8        ld         DAT_0054fad8,g5                   ; Load value from DAT_0054fad8 into g5
                 90 d8 fa 
                 54 00
        0000059c 00 10 ad 92     st         g5,(g4)=>DAT_00e80004             ; Store value of g5 into memory address pointed by g4
        000005a0 20 24 00 09     call       FUN_000029c0                      ; Call function FUN_000029c0
        000005a4 18 0e 84 59     shlo       0x18,g0,g0                        ; Shift left logical g0 by 0x18 bits
        000005a8 98 19 90 58     setbit     0x18,0x0,g2=>TMAPBASE_01000000    ; Set bit 0x18 in g2 (TMAPBASE_01000000)
        000005ac 24 80 84 3d     cmpibne    g0,g2,LAB_000005d0                ; Compare g0 with g2, if not equal, jump to LAB_000005d0
        000005b0 00 30 80        lda        DWORD_000029a0,g0                 ; Load address DWORD_000029a0 into g0
                 8c a0 29 
                 00 00
        000005b8 48 24 00 09     call       FUN_00002a00                      ; Call function FUN_00002a00
        000005bc 18 0e 84 59     shlo       0x18,g0,g0                        ; Shift left logical g0 by 0x18 bits
        000005c0 98 0d 84 59     shri       0x18,g0,g0                        ; Shift right logical g0 by 0x18 bits
        000005c4 00 30 80        st         g0,DAT_0054fadc                   ; Store value of g0 into memory location DAT_0054fadc
                 92 dc fa 
                 54 00
        000005cc 0c 00 00 08     b          LAB_000005d8                      ; Branch to LAB_000005d8
                             LAB_000005d0                                    XREF[1]:     000005ac(j)  
        000005d0 00 30 f0        st         g14,DAT_0054fadc                  ; Store value of g14 into memory location DAT_0054fadc
                 92 dc fa 
                 54 00
                             LAB_000005d8                                    XREF[1]:     000005cc(j)  
        000005d8 00 30 80        lda        LAB_00002c80,g0                   ; Load address LAB_00002c80 into g0
                 8c 80 2c 
                 00 00
        000005e0 00 1e 88 5c     mov        0x0,g1                            ; Move the value 0 into register g1
        000005e4 3c 7c 00 09     call       FUN_00008220                      ; Call function FUN_00008220
        000005e8 f8 1e 00 09     call       FUN_000024e0                      ; Call function FUN_000024e0 with uint parameter
                             LAB_000005ec                                    XREF[1]:     000005ec(j)  
        000005ec 00 00 00 08     b          LAB_000005ec                      ; Infinite loop: branch to LAB_000005ec
