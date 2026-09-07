LAB_00004ad0                                    ; Label LAB_00004ad0, can be jumped to from addresses 00004aac and 00004ab8
    00004ad0 00 30 a0        ld     DAT_0054f3f0, g4        ; Load the data at address 0x0054f3f0 into register g4
             90 f0 f3 
             54 00
    00004ad8 58 20 05 3d     cmpibne    0x0, g4, LAB_00004b30 ; Compare immediate 0x0 with g4, if not equal jump to LAB_00004b30
    00004adc 00 30 a0        ld     DAT_0054f3cc, g4        ; Load the data at address 0x0054f3cc into register g4
             90 cc f3 
             54 00
    00004ae4 14 20 0d 3d     cmpibne    0x1, g4, LAB_00004af8 ; Compare immediate 0x1 with g4, if not equal jump to LAB_00004af8
    00004ae8 01 1e 80 5c     mov    0x1, g0                 ; Move the immediate value 0x1 into register g0
    00004aec 0a 1e 88 5c     mov    0xa, g1                 ; Move the immediate value 0xa into register g1
    00004af0 80 3d 00 09     call   FUN_00008870            ; Call the function at address 0x00008870
    00004af4 0c 06 00 09     call   FUN_00005100_Debug?     ; Call the function at address 0x00005100 (possibly a debug function)
