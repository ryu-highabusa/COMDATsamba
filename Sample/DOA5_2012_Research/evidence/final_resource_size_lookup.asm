; 2012-08-19
824CD790  3d60820e    lis r11, -0x7df2
824CD794  394bc1e4    addi r10, r11, -0x3e1c
824CD798  7f035040    cmplw cr6, r3, r10
824CD79C  409a000c    bne cr6, 0x824cd7a8
824CD7A0  38600000    li r3, 0
824CD7A4  4e800020    blr 
824CD7A8  3d60820e    lis r11, -0x7df2
824CD7AC  3940000c    li r10, 0xc
824CD7B0  392b15f8    addi r9, r11, 0x15f8
824CD7B4  3d0082c9    lis r8, -0x7d37
824CD7B8  7ce91850    subf r7, r9, r3
824CD7BC  3968d840    addi r11, r8, -0x27c0
824CD7C0  7cc753d6    divw r6, r7, r10
824CD7C4  54ca1838    slwi r10, r6, 3
824CD7C8  7d6a5a14    add r11, r10, r11
824CD7CC  814b0004    lwz r10, 4(r11)
824CD7D0  554517fe    rlwinm r5, r10, 2, 0x1f, 0x1f
824CD7D4  2f050000    cmpwi cr6, r5, 0
824CD7D8  409a000c    bne cr6, 0x824cd7e4
824CD7DC  806b0000    lwz r3, 0(r11)
824CD7E0  4e800020    blr 
824CD7E4  3d6082ca    lis r11, -0x7d36
824CD7E8  554a1838    slwi r10, r10, 3
824CD7EC  392bd318    addi r9, r11, -0x2ce8
824CD7F0  7c6a482e    lwzx r3, r10, r9
824CD7F4  4e800020    blr 
