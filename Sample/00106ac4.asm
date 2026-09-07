00106ac4 b9 01 00 00 00  MOV        ECX,0x1               ; Set ECX to 1
00106ac9 89 0c 85        MOV        dword ptr [EAX*0x4 + DAT_00d802f8],ECX ; Write 1 to table
                 f8 02 d8 00
00106ad5 40              INC        EAX                   ; Increment EAX (loop counter)
00106ad6 83 f8 15        CMP        EAX,0x15              ; Compare EAX with 21 (end of table)
00106ad9 72 e7           JC         LAB_00106ac2          ; Jump back if EAX < 21
00106adb c3              RET                              ; Return
