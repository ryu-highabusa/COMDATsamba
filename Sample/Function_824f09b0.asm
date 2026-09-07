# Function prologue
824f09b0 7d 88 02 a6     mfspr      r12,LR                      # Move from special-purpose register LR (link register) to r12
824f09b4 48 4f e3 15     bl         FUN_829eecc8                # Branch and link (call) to function FUN_829eecc8
824f09b8 94 21 ff 80     stwu       r1,-0x80(r1)                # Store word with update, adjusting the stack pointer
824f09bc 3d 60 83 02     lis        r11,-0x7cfe                 # Load immediate shifted: Load upper half of an address into r11
824f09c0 1d 44 00 9c     mulli      r10,r4,0x9c                 # Multiply r4 by 0x9c and store result in r10
824f09c4 39 6b 01 88     addi       r11,r11,0x188               # Add immediate: adjust address in r11
824f09c8 7c 7e 1b 78     or         r30,r3,r3                   # OR r3 with itself, setting r30 to the value of r3
824f09cc 39 20 ff ff     li         r9,-0x1                    # Load immediate: set r9 to -1
824f09d0 7f ea 5a 14     add        r31,r10,r11                 # Add r10 and r11, store the result in r31 (creating a memory pointer)
824f09d4 57 c8 04 3e     rlwinm     r8,r30,0x0,0x10,0x1f        # Rotate left and mask: Shift r30 left and mask, result to r8
824f09d8 3b 80 00 00     li         r28,0x0                    # Load immediate: set r28 to 0
824f09dc 2b 08 44 c4     cmplwi     cr6,r8,0x44c4               # Compare logical immediate: check if r8 is less than or equal to 0x44c4
824f09e0 3b a0 00 01     li         r29,0x1                    # Load immediate: set r29 to 1
824f09e4 b3 df 00 32     sth        r30,0x32(r31)               # Store halfword: store r30 (ACT_CODE_P1) at offset 0x32 from r31
824f09e8 b1 3f 00 34     sth        r9,0x34(r31)                # Store halfword: store r9 (ACT_FLAG_P1) at offset 0x34 from r31
824f09ec 41 98 00 20     blt        cr6,LAB_824f0a0c            # Branch if less than: if comparison result is less, jump to LAB_824f0a0c

# XOR, store, and load operations
824f09f0 68 87 00 01     xori       r7,r4,0x1                   # XOR immediate: r7 = r4 XOR 1
824f09f4 9b bf 00 36     stb        r29,0x36(r31)               # Store byte: store r29 (1) at offset 0x36 (ACT_REQ_P1) from r31
824f09f8 38 ab 00 21     addi       r5,r11,0x21                 # Add immediate: create memory pointer in r5 (BYTE_830201a9)
824f09fc 1c c7 00 9c     mulli      r6,r7,0x9c                  # Multiply immediate: multiply r7 by 0x9c, store in r6
824f0a00 7c 86 28 ae     lbzx       r4,r6,r5                    # Load byte and index: load byte from r5 + r6 into r4
824f0a04 98 9f 00 98     stb        r4,0x98(r31)                # Store byte: store value of r4 at offset 0x98 (DAT_83020220) from r31
824f0a08 48 00 00 10     b          LAB_824f0a18                # Branch unconditionally: jump to LAB_824f0a18

# Handling branch cases
LAB_824f0a0c:
824f0a0c 88 7f 00 21     lbz        r3,0x21(r31)                # Load byte: load byte from offset 0x21 (BYTE_830201a9) from r31 into r3
824f0a10 9b 9f 00 36     stb        r28,0x36(r31)               # Store byte: store r28 (0) at offset 0x36 (ACT_REQ_P1) from r31
824f0a14 98 7f 00 98     stb        r3,0x98(r31)                # Store byte: store value of r3 at offset 0x98 (DAT_83020220) from r31

# Continue function
LAB_824f0a18:
824f0a18 39 2b 00 32     addi       r9,r11,0x32                 # Add immediate: set r9 to point to ACT_CODE_P1
824f0a1c 39 0b 00 98     addi       r8,r11,0x98                 # Add immediate: set r8 to point to DAT_83020220
824f0a20 7c 8a 4a 2e     lhzx       r4,r10,r9                   # Load halfword and index: load halfword from r9 + r10 into r4
824f0a24 7c 6a 40 ae     lbzx       r3,r10,r8                   # Load byte and index: load byte from r8 + r10 into r3
824f0a28 48 00 4f c1     bl         FUN_824f59e8                # Branch and link: call FUN_824f59e8
824f0a2c 7c 6b 1b 78     or         r11,r3,r3                   # OR: set r11 to value of r3
824f0a30 88 7f 00 98     lbz        r3,0x98(r31)                # Load byte: load byte from offset 0x98 (DAT_83020220) from r31 into r3
824f0a34 7f c4 f3 78     or         r4,r30,r30                  # OR: set r4 to the value of r30
824f0a38 88 eb 00 04     lbz        r7,0x4(r11)                 # Load byte: load byte from offset 0x4 from r11 into r7
824f0a3c 98 ff 00 37     stb        r7,0x37(r31)                # Store byte: store r7 at offset 0x37 (ACT_STATE_P1) from r31

# Finalize the function
824f0a40 48 00 4f a9     bl         FUN_824f59e8                # Branch and link: call FUN_824f59e8
824f0a44 88 c3 00 0c     lbz        r6,0xc(r3)                  # Load byte: load byte from offset 0xc from r3 into r6
824f0a48 2b 06 00 ff     cmplwi     cr6,r6,0xff                 # Compare logical immediate: check if r6 equals 0xff
824f0a4c 41 9a 00 18     beq        cr6,LAB_824f0a64            # Branch if equal: if r6 equals 0xff, jump to LAB_824f0a64

# Setting specific byte values
824f0a50 9b bf 00 4a     stb        r29,0x4a(r31)               # Store byte: store r29 at offset 0x4a (DAT_830201d2) from r31
824f0a54 9b 9f 00 3f     stb        r28,0x3f(r31)               # Store byte: store r28 at offset 0x3f (DAT_830201c7) from r31
824f0a58 9b bf 00 40     stb        r29,0x40(r31)               # Store byte: store r29 at offset 0x40 (DAT_830201c8) from r31
824f0a5c 38 21 00 80     addi       r1,r1,0x80                  # Add immediate: adjust the stack pointer back
824f0a60 38 00 00 00     li         r0,0                        # Load immediate: set r0 to 0
824f0a64 48 00 00 00     blr                                     # Return from the function
