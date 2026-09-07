LAB_8241503c:
    lwz r9, 0x10(r10)           ; Load word from memory address (r10 + 0x10) into r9 => DAT_82dfcf20
    add r9, r8, r9              ; Add r8 to r9, storing the result in r9
    lwz r5, 0x0(r9)             ; Load word from memory address (r9 + 0x0) into r5 => DAT_menu_storymode0
    cmpwi cr6, r5, 0x4          ; Compare immediate value 0x4 with r5, result stored in CR6
    bne cr6, LAB_82415058       ; Branch to LAB_82415058 if the condition in CR6 is not equal
    stw r6, 0x18(r9)            ; Store word r6 at memory address (r9 + 0x18) => DAT_menu_storymode3
    lwz r11, 0x14(r10)          ; Load word from memory address (r10 + 0x14) into r11 => DAT_82dfcf24
