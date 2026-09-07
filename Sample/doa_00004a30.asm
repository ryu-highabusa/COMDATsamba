s__00004a30                                     XREF[1]:     00004b1c(*)  
    00004a30 20 20 20        ds         "                     \n"  ; Define a string (space padded with new line)
             20 20 20 
             20 20 20 
    00004a50 00 30 a0        ldob       ButtonPress_P1_0054fccd,g4  ; Load the byte value from ButtonPress_P1_0054fccd into register g4
             80 cd fc 
             54 00
    00004a58 87 08 a5 58     and        0x7,g4,g4  ; AND the value in g4 with 0x7 (binary: 00000111) to isolate the lower 3 bits
    00004a5c 48 20 3d 3d     cmpibne    0x7,g4,LAB_00004aa4  ; Compare the result with 0x7; if not equal, branch to LAB_00004aa4
    00004a60 00 30 a0        ldob       ButtonCoinTestServiceStart_0054fcd4,g4  ; Load the byte value from ButtonCoinTestServiceStart_0054fcd4 into register g4
             80 d4 fc 
             54 00
    00004a68 3c 20 25 30     bbc        0x4,g4,LAB_00004aa4  ; Branch to LAB_00004aa4 if bit 4 of g4 is clear (0)
    00004a6c 00 30 80        lda        TMAPBASE_01000000,g0  ; Load address TMAPBASE_01000000 into register g0
             8c 00 00 
             00 01
    00004a74 7c 3b 00 09     call       FUN_000085f0  ; Call the function FUN_000085f0 (its functionality is not defined here)
    00004a78 00 30 80        lda        DAT_01004000,g0  ; Load address DAT_01004000 into register g0
             8c 00 40 
             00 01
                             LAB_00004a80                                    XREF[1]:     0006c348(*)  
    00004a80 70 3b 00 09     call       FUN_000085f0  ; Call the function FUN_000085f0 again
                             LAB_00004a84                                    XREF[1]:     0006c15c(*)  
    00004a84 00 30 80        lda        DAT_01002000,g0  ; Load address DAT_01002000 into register g0
             8c 00 20 
             00 01
    00004a8c 64 3b 00 09     call       FUN_000085f0  ; Call the function FUN_000085f0 again
    00004a90 00 30 80        lda        DAT_01006000,g0  ; Load address DAT_01006000 into register g0
             8c 00 60 
             00 01
                             LAB_00004a98                                    XREF[1]:     0006c0fc(*)  
    00004a98 58 3b 00 09     call       FUN_000085f0  ; Call the function FUN_000085f0 again
                             LAB_00004a9c                                    XREF[1]:     0006c240(*)  
    00004a9c 54 18 00 09     call       FUN_000062f0  ; Call the function FUN_000062f0 (its functionality is not defined here)
                             LAB_00004aa0                                    XREF[1]:     00004aa0(j)  
    00004aa0 00 00 00 08     b          LAB_00004aa0  ; Infinite loop: Branch to itself, creating an endless loop

	

LAB_00004aa4                                    ; Label LAB_00004aa4, can be jumped to from addresses 00004a5c and 00004a68
    00004aa4 00 30 a0        ldob       ButtonCoinTestServiceStart_0054fcd4, g4   ; Load byte from address 0x0054fcd4 into g4
             80 d4 fc 
             54 00
    00004aac 24 20 25 30     bbc        0x4, g4, LAB_00004ad0                      ; Branch if bit 4 in g4 is clear to LAB_00004ad0
    00004ab0 00 30 a0        ldob       ButtonPress_P1_0054fccd, g4                ; Load byte from address 0x0054fccd into g4
             80 cd fc 
             54 00
    00004ab8 18 20 05 30     bbc        0x0, g4, LAB_00004ad0                      ; Branch if bit 0 in g4 is clear to LAB_00004ad0
    00004abc 00 30 a0        ld         DAT_0054f3cc_debug1???, g4                 ; Load data from address 0x0054f3cc into g4
             90 cc f3 
             54 00
    00004ac4 14 50 a0 59     addo       g4, 0x1, g4                                ; Add 1 to g4 and store the result back in g4
    00004ac8 00 30 a0        st         g4, DAT_0054f3cc_debug1???                 ; Store the value of g4 into address 0x0054f3cc
             92 cc f3 
             54 00
                                                                                   ; Label LAB_00004ad0, can be jumped to from addresses 00004aac and 00004ab8
LAB_00004ad0
    00004ad0 00 30 a0        ld         DAT_0054f3f0_debug0???, g4                 ; Load data from address 0x0054f3f0 into g4
             90 f0 f3 
             54 00
    00004ad8 58 20 05 3d     cmpibne    0x0, g4, LAB_00004b30                      ; Compare g4 with 0x0, if not equal jump to LAB_00004b30
    00004adc 00 30 a0        ld         DAT_0054f3cc_debug1???, g4                 ; Load data from address 0x0054f3cc into g4
             90 cc f3 
             54 00
    00004ae4 14 20 0d 3d     cmpibne    0x1, g4, LAB_00004af8                      ; Compare g4 with 0x1, if not equal jump to LAB_00004af8
    00004ae8 01 1e 80 5c     mov        0x1, g0                                    ; Move immediate value 0x1 into g0
    00004aec 0a 1e 88 5c     mov        0xa, g1                                    ; Move immediate value 0xa into g1
    00004af0 80 3d 00 09     call       FUN_00008870                               ; Call the function at address 0x00008870
    00004af4 0c 06 00 09     call       FUN_00005100_Debug?                        ; Call the function at address 0x00005100 (possibly a debug function)

