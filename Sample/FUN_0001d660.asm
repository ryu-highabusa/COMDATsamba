**************************************************************
*                          FUNCTION                          *
**************************************************************
undefined __stdcall FUN_0001d660(int param_1)
undefined         g0:1           <RETURN>
int               g0:4           param_1
FUN_0001d660                                    XREF[1]:     FUN_0001d0e0:0001d1bc(c)  
0001d660 34 20 04 3d     cmpibne    0x0,param_1,LAB_0001d694   ; if param_1 != 0, jump to LAB_0001d694
0001d664 00 30 b0        ld         DAT_00557da8,g6            ; load memory at DAT_00557da8 into g6
         90 a8 7d 
         55 00
0001d66c 96 34 00 6c     movr       g6,fp0                     ; move g6 to floating point register fp0
0001d670 80 1c a0 6d     movrl      fp0,g4                     ; move fp0 to g4
0001d674 00 1e 90 5c     mov        0x0,g2                     ; move 0 to g2
0001d678 00 30 98        lda        2.125,g3                   ; load 2.125 to g3
         8c 00 00 
         08 40
0001d680 94 a2 04 69     cmprl      g4,g2                      ; compare g4 and g2 (0.0)
0001d684 34 00 00 14     bl         LAB_0001d6b8               ; if g4 < g2, jump to LAB_0001d6b8
0001d688 00 30 98        lda        3,g3                       ; load 3 to g3
         8c 00 00 
         40 40
0001d690 80 00 00 08     b          LAB_0001d710               ; jump to LAB_0001d710

LAB_0001d694                                    XREF[1]:     0001d660(j)  
0001d694 00 30 b0        ld         DAT_00557da8,g6            ; load memory at DAT_00557da8 into g6
         90 a8 7d 
         55 00
0001d69c 96 34 00 6c     movr       g6,fp0                     ; move g6 to floating point register fp0
0001d6a0 80 1c a0 6d     movrl      fp0,g4                     ; move fp0 to g4
0001d6a4 00 1e 90 5c     mov        0x0,g2                     ; move 0 to g2
0001d6a8 00 30 98        lda        1.9375,g3                  ; load 1.9375 to g3
         8c 00 00 
         f8 3f
0001d6b0 94 a2 04 69     cmprl      g4,g2                      ; compare g4 and g2 (0.0)
0001d6b4 54 00 00 16     ble        LAB_0001d708               ; if g4 <= g2, jump to LAB_0001d708

LAB_0001d6b8                                    XREF[1]:     0001d684(j)  
0001d6b8 00 30 a0        ld         DAT_00557da4,g4            ; load memory at DAT_00557da4 into g4
         90 a4 7d 
         55 00
0001d6c0 00 30 a8        ld         DAT_00557db0,g5            ; load memory at DAT_00557db0 into g5
         90 b0 7d 
         55 00
0001d6c8 94 47 a5 78     addr       g4,g5,g4                   ; add g4 and g5, store result in g4
0001d6cc 00 30 a0        st         g4,DAT_00557da4            ; store g4 in memory at DAT_00557da4
         92 a4 7d 
         55 00
0001d6d4 00 30 a0        ld         DAT_00557db4,g4            ; load memory at DAT_00557db4 into g4
         90 b4 7d 
         55 00
0001d6dc 96 07 a5 78     addr       g6,g4,g4                   ; add g6 and g4, store result in g4
0001d6e0 00 30 a0        st         g4,DAT_00557da8            ; store g4 in memory at DAT_00557da8
         92 a8 7d 
         55 00
0001d6e8 00 30 a0        ld         DAT_00557dac,g4            ; load memory at DAT_00557dac into g4
         90 ac 7d 
         55 00
0001d6f0 00 30 a8        ld         DAT_00557db8,g5            ; load memory at DAT_00557db8 into g5
         90 b8 7d 
         55 00
0001d6f8 94 47 a5 78     addr       g4,g5,g4                   ; add g4 and g5, store result in g4
0001d6fc 00 30 a0        st         g4,DAT_00557dac            ; store g4 in memory at DAT_00557dac
         92 ac 7d 
         55 00
0001d704 00 00 00 0a     ret                                  ; return from function

LAB_0001d708                                    XREF[1]:     0001d6b4(j)  
0001d708 00 30 98        lda        1.5,g3                     ; load 1.5 to g3

LAB_0001d710                                    XREF[1]:     0001d690(j)  
0001d710 00 30 98        st         g3,DAT_00557da8            ; store g3 in memory at DAT_00557da8
         92 a8 7d 
         55 00
0001d718 00 30 f0        st         g14,DAT_00557db0           ; store g14 in memory at DAT_00557db0
         92 b0 7d 
         55 00
0001d720 00 30 f0        st         g14,DAT_00557db4           ; store g14 in memory at DAT_00557db4
         92 b4 7d 
         55 00
0001d728 00 30 f0        st         g14,DAT_00557db8           ; store g14 in memory at DAT_00557db8
         92 b8 7d 
         55 00
0001d730 00 00 00 0a     ret                                  ; return from function
