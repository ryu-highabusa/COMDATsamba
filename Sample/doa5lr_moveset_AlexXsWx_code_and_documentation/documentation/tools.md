# Generic tools

## Conversions

    (8000).asX_HexStr                 // = "0x1F_40" // big endian
    "0x1F_40".dehexUint               // = 8000
    (8000).asAob2Str                  // = "40 1F"   // little endian
    "40 1F".dehexUint                 // = 8000
    "04 08 0F 10 17 2A".dehexUintAob  // = [4, 8, 15, 16, 23, 42]
    "04080F10172A".dehexUintAob       // = [4, 8, 15, 16, 23, 42]
    [4, 8, 15, 16, 23, 42].asAobStr   // = "04 08 0F 10 17 2A"
    "04 08 0F 10 17 2A".aobLength     // = 6
    "?? ?? ?? 10 17 2A".aobLength     // = 6

## Data analysis

    [
        "111 punch 111",
        "222 kick 222",
        "333 punch 333",
        "444 punch 444",
        "555 kick 555",
    ].groupBy(
        e => e.split(" ")[1],
    )

    [
        "dash punch",
        "dash kick",
        "jump punch",
        "jump kick",
    ].groupByMultiple(
        e => e.split(" "),
    )

    ["a", "b", "z", "y", "x"].sortAscending()
    ["A", "B", "1f", "1A"].sortDescending(e => e.dehexUint)

    ["A", "b", "A", "B", "C"].filterUnique()
    ["A", "b", "a", "B", "C"].filterUnique(e => e.toLowerCase())

    // flatAobStr = hex values copied from HexWorkshop, that only contain pointers back to back
    tools.discoverPtrsRange(flatAobStr)

    someUint8Array.logPrettyAob()
