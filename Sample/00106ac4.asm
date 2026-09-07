00106ac4 83 f8 01        CMP        EAX,0x1              ; Compare EAX (index) with 1
00106ac7 0f 95 c1        SETNZ      CL                  ; Set CL to 1 if not zero (EAX != 1)
00106aca 49              DEC        ECX                 ; Decrement ECX
00106acb 83 e1 02        AND        ECX,0x2             ; Keep only the second bit of ECX
00106ace 89 0c 85        MOV        dword ptr [EAX*0x4 + DAT_00d802f8],ECX ; Write ECX to table
