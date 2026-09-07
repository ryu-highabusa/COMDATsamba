# Moveset bin format

## Structure / file format

The WIP declaration of the moveset bin file format can be found in `src/parsers/movesetBin/parseMovesetBin.ts` @ `parseBin()`

## Terminology

`Move id` = a 16-bit number that defines a move, e.g. "77 1F" (or 0x1F77, or 8055) is Rig's dragon kick (236K). Usually everything starts from that number - input commands tell which move id to start, or which move id is required for a followup input; AI has combos written in move ids, etc. This number contains information about `move category` by increments of 8000. `move category` together with remainder from that increments of 8000 tells which `move info` to use. There are cases when the game performs math operations on `move id`, e.g. increasing by 1 for stuns for open stance, or increasing by 1 for multi-hit moves to get `move info` about the consequent hit (happens from `event timeline`), or adding 0x204 for stuns to get critical reversal reaction (not sure about this one)  

`Move category` = The game separates move ids into 6 categories, only one of them is defined in base moveset bin, other 5 are coming from character bins (although they might have an option to extend/overwrite the one from base bin). See `src/parsers/movesetBin/doa5lrTools.ts` @ `getMoveCategoryAndIndex()`  

`Move info` = small chunk of information (12 bytes) that tells more about move from its `move id`; e.g. tells which `anim id` to use; `second id` for hit tables; if there's some `move id` that has to be auto-played next etc  

`Move type` = throw / strike / jump strike / OH / "other" etc  

`Second id` = value from `move info` that tells which entry from `hit table` (or throw table, or alike) to use on hit  

`Animation id` = a 16-bit number that tells which animation to play, and which `events timeline` to use; e.g. "28 05" or 0x0528 for Rig's dragon kick (236K)  

`Input command` = Array of bytes (commands & payloads for them) which tell the game which checks to run to see if what user pressed matches this input. For example, see `move_inputs.txt` and `src/parsers/movesetBin/InputParser.js`  

`Command list (fight screen info)` = Moves of a character, as they are manually gathered in a moveset bin file, for the purpose of display on screen. Can be incomplete and inaccurate since it's not used for any other purpose than display on screen  

`Move list (fight screen info)` = Moves of a character that are displayed from menu -> fight screen info -> move list. Can be incomplete and inaccurate since it's not used for any other purpose than display on screen  

`Hit table entry` = 0x74 bytes telling which move ids to apply in which case (e.g. neutral hit, hi-counter crouching hit etc) as well as any additional on-hit information like damage or knockback distance  

`Hit table` = `hit table entry` or array of `hit table entries`  

`Animation info` / `Timeline (event)` = Information that tells which actual animation id to use (usually same as `anim id` from the `move info`), along with instructions what to do at specific points in time. See `timelines.txt` for an example  

`Timeline (motion)` = Information that tells how to change a single value (e.g. root position x) over time, usually as entries of time (measured in frames) and value (usually 8-bit uint?) and easing (how to interpolate the value between entries). See `motion.txt` for an example  

## parseMovesetBin

> NOTE: bin file names matter, this program detects char name as value between 1st and 2nd underscore
> Insights are based on this name (case sensitive)

## base.html > parse bins mode  

Drop extracted bin files (can be multiple at once), save them as global variables via right click, add them to custom global variable parsed.bins  

    parsed = (typeof parsed === "undefined") ? {} : parsed
    parsed.bins = { ...parsed.bins, ...temp1 }

Expand output object, click on "(...)" on `saveHslString`, save as hsl, load in hexworkshop as structure library, click on hammer icon, select `AutoParseFile`  

> Note: there is also a color map available for use in hexworkshop, see `character_bin.cmap` (although it was developed after I changed default color for odd column from barely visible grey to another shade of blue)  

## Analysis

See all moves:

    genTools.dumpAllMoves(parsed.bins.rig)

See all moves available from inputs, with extra info:

    genTools.buildCharacter(
        parsed.bins.BASE,
        parsed.bins.rig,
        handmadeDescriptions, // optional
    )

You can extend `handmadeDescriptions` first by copying contents of files like data/doa5lr_rig.js to the console.  

Get extra info for a specific move id (not necessarily available from inputs):

    temp42 = genTools.buildCharacter(
        parsed.bins.BASE,
        parsed.bins.rig,
        handmadeDescriptions,
    )
    temp42.analyzeMoveId("77 1F")

See which inputs lead to a given move id:

    temp42.analyzeMoveId("77 1F").inputsForThisMoveId

Find move id from user-friendly input notation (e.g. 426T instead of YN):  
> NOTE: uses command list so not 100% accurate or complete  

    genTools.findMoveIdsFromInput(parsed.bins.rig, "236k")

Manually parse inputs:

    InputParser.parsedDataToString(
        InputParser.readInput(
            "77 1F 27 10 00 02 50 00 02 40 00 02 36 00 12 14 00 04 00 02 36 00 13 28 2A"
        ).result.value
    )

Get `move info` from `move id`:

    genTools.getMoveInfo(parsed.bins.rig, "77 1F")
    // or to see it raw AOB:
    genTools.getMoveInfo(parsed.bins.rig, "77 1F").rawU8A.asAobStr

Show `animation info` from `move id`:

    genTools.getAnimationInfo(parsed.bins.rig, "77 1F")
    // or to see it raw AOB:
    genTools.getAnimationInfo(parsed.bins.rig, "77 1F").rawU8A.logPrettyAob()

And other tools, see `genTools`:

    genTools

## Simplify objects

> NOTE: this loses all info about pointers, which also means that you won't be able to tell which objects are unique and which are duplicated

Recursively get rid of stuff like .v, .d, .rawU8A etc, and map it all to plain .v (or .d for pointers):

    genTools.collapse(parsed.bins.rig.header)

## Comparing bins

Super helpful when you try to understand a size of a structure, like whether it has a terminator, or fixed size.  
Drop all moveset bins to the page, wait for them to parse, save them to `parsed.bins` and run this:  

    genTools.compareMems(
        parsed.bins,                          // parsed bins to compare
        charBin => charBin.header.v.pIdk13.v, // from where to show data
        16 * 10,                              // how much data to show
        16,                                   // how much data to show per line
    )

Expand output, click on "(...)" after `logMemView`  

Background color will indicate usage; black = used; red = 0-width reference (blob of unknown size pointing to that location), no bg = unused

## Modifying bins

> NOTE: make sure file is well covered and there are no unknowns and unused chunks that contain pointers.  
> It took me about 2-3 hours to do so for Rig.bin and I found new pointers even though it was already 99.57% parsed.  
> I generated an `*.hsl` without sorting unused chunks, and went through entire file, one structure at a time, from top to bottom, verifying that _everything_ that is a pointer, is parsed as such (`h.ptr()`).  

Example of adding trail effect from p+k to 214k:

From the output object, save `fileUsageHelper` as a global variable:

    myFileUsageHelper = temp4
    myFileUsageHelper.getModifiedFile([{
        from: (
            0x02_35_A0 +
            "00 00 B4 05 01 00 02 00 0A 00 22 00 65 00 2D 00 33 00 01 00 05 00 03 00 3C 30 A4 00 17 00 01 00 0E 00 A0 00 05 00 04 24 38 05 23 F0 10 68 16 61 96 38 21 D0 E8 44 00 00 00 00 09 00 00 00 00 00 00 00".aobLength
        ),
        insert: new Uint8Array("A0 00 04 00 A2 21 50 04 A2 A0 20 20 1A 0C 72 46 1B 41 21 CF 09 00 00 00 00 00 00 00".dehexUintAob),
    }])

Expand the new output object, click on "(...)" after `save`

> Note: this should work in theory, in practice I never got to actually test it.  