| **Instruction**         | **Operation**                                                                                       | **Description**                                                                 |
|--------------------------|---------------------------------------------------------------------------------------------------|---------------------------------------------------------------------------------|
| `stwu Rt, offset(Ra)`    | Store Word with Update                                                                            | Stores a 32-bit value in memory and updates `Ra` (commonly for stack setup).    |
| `lis Rt, immediate`      | Load Immediate Shifted                                                                            | Loads a 16-bit value into the upper half of `Rt`.                               |
| `addi Rt, Ra, immediate` | Add Immediate                                                                                    | Adds a 16-bit immediate value to `Ra`.                                          |
| `lbz Rt, offset(Ra)`     | Load Byte and Zero                                                                               | Loads a byte from memory into `Rt` and zero-extends it to 32 bits.              |
| `stb Rt, offset(Ra)`     | Store Byte                                                                                       | Stores the least significant byte of `Rt` into memory.                          |
| `sthx Rt, Ra, Rb`        | Store Halfword Indexed                                                                           | Stores a 16-bit value at address `(Ra + Rb)`.                                   |
| `rlwinm Rt, Ra, sh, mb, me` | Rotate Left Word Immediate, AND with Mask                                                     | Rotates `Ra` left by `sh` and masks specific bits (`mb` to `me`).               |
| `mulli Rt, Ra, immediate`| Multiply Low Immediate                                                                           | Multiplies `Ra` by a 16-bit immediate and stores the result in `Rt`.            |
| `xori Rt, Ra, immediate` | XOR Immediate                                                                                   | Performs bitwise XOR between `Ra` and a 16-bit immediate value.                 |
| `or Rt, Ra, Rb`          | Logical OR                                                                                      | Performs bitwise OR between `Ra` and `Rb`.                                      |
| `cmplwi crX, Ra, imm`    | Compare Logical Immediate                                                                        | Compares `Ra` with a 16-bit immediate (unsigned) and sets condition register.   |
| `subi Rt, Ra, immediate` | Subtract Immediate                                                                               | Subtracts a 16-bit immediate from `Ra` and stores the result in `Rt`.           |
| `beq crX, target`        | Branch if Equal                                                                                 | Jumps to `target` if comparison result in `crX` is equal.                       |
| `bl target`              | Branch and Link                                                                                 | Calls a function and saves the return address in the link register.             |

