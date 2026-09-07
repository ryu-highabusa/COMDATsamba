                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                             undefined FUN_00106a90(undefined1 param_1)
             undefined         AL:1           <RETURN>             ; Returns 1 byte in AL
             undefined1        Stack[0x4]:1   param_1              ; Input parameter passed on the stack (byte)
                                                                                          XREF[2]: Called from FUN_00101200  
        00106a90 8a 44 24 04     MOV        AL,byte ptr [ESP + param_1]    ; Load the input parameter (byte) into AL
        00106a94 8a 0d d8        MOV        CL,byte ptr [DAT_0061b4d8]     ; Load a byte from DAT_0061b4d8 into CL
                 b4 61 00                                              ; DAT_0061b4d8 is likely a constant (e.g., `0x0E`)
        00106a9a 3a c1           CMP        AL,CL                          ; Compare the input parameter (AL) with CL
        00106a9c 76 02           JBE        LAB_00106aa0                   ; If AL <= CL, jump to LAB_00106aa0
        00106a9e 8a c1           MOV        AL,CL                          ; If AL > CL, set AL to CL
                             LAB_00106aa0                                    ; Entry point for valid values
        00106aa0 0f b6 c0        MOVZX      EAX,AL                         ; Zero-extend AL into EAX (clear upper bytes)
        00106aa3 0f b6 80        MOVZX      EAX,byte ptr [EAX + 0xd802a0]  ; Load a value from DAT_00d802a0 + EAX into EAX
                 a0 02 d8 00                                              ; Map input index to a table value
        00106aaa 8d 04 40        LEA        EAX,[EAX + EAX*0x2]            ; Compute EAX = EAX * 3
        00106aad 8d 04 c5        LEA        EAX,[EAX*0x8 + ModeSelect00_StoryMode0]
                 70 b3 61 00                                              ; Compute the final address:
                                                                         ; EAX = (EAX * 24) + ModeSelect00_StoryMode0
        00106ab4 c3              RET                                      ; Return the computed address in EAX
        00106ab5 cc              INT3                                     ; Debug breakpoint (not used in normal execution)
        00106ab6 cc              INT3                                     ; Additional breakpoints (placeholders)
        00106ab7 cc              INT3
        00106ab8 cc              INT3
        00106ab9 cc              INT3
        00106aba cc              INT3
        00106abb cc              INT3
        00106abc cc              INT3
        00106abd cc              INT3
        00106abe cc              INT3
        00106abf cc              INT3
        00106ac0 33 c0           XOR        EAX,EAX                        ; Clear EAX (not part of this function)
