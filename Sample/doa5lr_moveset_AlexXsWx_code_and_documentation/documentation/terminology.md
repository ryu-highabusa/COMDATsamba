# Terminology

`FS` = File System or File Section  
`IDK` = Acronym for "I Don't Know" (data meaning of which wasn't understood yet)  
`magic` = [Magic number](https://en.wikipedia.org/wiki/Magic_number_(programming))  
`AOB` = array of bytes, e.g. `04 08 0F 10 17 2A` or `04080F101C172A` (meaning values 4, 8, 15, 16, 23, 42)
`Uint` = unsigned integer  
`Uint8` = unsigned 8-bit integer (0...255)  
`U8A` = Uint8Array  
`pointer` = number, address of the data that is being pointer at  
`pSomething` = pointer to the Something  
`*(pSomething)` = value at the pointer, aka pointer dereferencing  
`pSomething->somethingElse` = Something.somethingElse  

> NOTE: do not confuse `->` operator from C/C++ (dereferencing) with `=>` from javascript (arrow function).  

`e => e.someProperty` = arrow function, _kinda_ `function(e) { return e.someProperty; }`  

`e` = short for "element"
`v` = short for "value"
`d` = short for "dereferenced"

`4` = direction away from opponent  
`6` = direction towards opponent  
`8` = direction up / towards background  
`2` = direction down / towards foreground  
`9` = direction 6+8  
`7` = direction 4+8  
`1` = direction 4+2  
`3` = direction 6+2  
`5` = direction none (no direction button pressed)  

> NOTE: under the hood of the game, `4` and `6` mean directions relative to where character faces, `6` being forward; so what players call `BT 4K` in game's memory is `6K`  

`P`  = button punch  
`K`  = button kick  
`T`  = button throw (aka H+P)  
`H`  = button hold/block  
`Ap` = appeal (taunt)  
`S`  = H+P+K

> NOTE: under the hood of the game, it uses `F` for `H`, `N` for `T`, `A` for `Ap`, `S` for Akira's "release H 1 frame after", and has shortcuts like `H` for `236`, `h` for `214`, `Y` for `426` etc.  

`PP` = punch-punch string  
`P P` = punch, punch again (not followup)  
`(6)P` = press and hold forward and press punch  
`6(6)~P` = press 6 twice, hold second press, wait a bit and then press punch  
`7(K)` = press 7 and hold kick (charge attack)  
`426((T))` = double braces mean full charge (for moves with multiple charge stages)  

`GB` = guard break  
`NH` = neutral hit  
`CH` = counter hit  
`HCH` = high counter hit (shared with hits on opponent in stun/gb)  

`BT` = back turned (with back to foe)  
`G<X><Y>` (e.g. `G86`) - on the ground; X = 8/2 meaning face up/down, Y = 6/4/8/2 meaning where head points to; so e.g. `G86` means face up, legs towards opponent  

`TLC` = Rig's stance "Turn Leg Cut"  (e.g. 6P+K)  
`BND` = Rig's stance "Bending stance" (e.g. 4P+K)  
