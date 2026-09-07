import {
    VarPath,
    ErrorMessage,
    AobStr,
    FlatAobStr,
    NumberAsAobStr,
    NumberAsX_HexStr,
} from "./aliases.d";
import "./environment.d";
import {
    ParentValue,
    ReadHResult,
    ReadHEnv,
    TypeH,
    h,
    dontDereferencePtr,
    unknownBlobSize,
    bytesUntilFFType,
    doReadTypeH,
} from "./typeH";
import { ptrSize } from "./consts";
import { findAobs, findAob } from "./aobTools";
import { finalizeName } from "./genericTools";
import {
    getMoveId,
    getMoveCategoryAndIndex,
    getBaseBinMoveIdCategory,
    createInputComparator,
    isBaseBinMoveId,
} from "./doa5lrTools";
import { createHslHelper } from "./hslTools";
import { createFileUsageHelper } from "./fileUsageHelper";
import { validateDupOf, validateNotZero } from "./validators";

// Set up file drag-n-drop listener to automatically parse bin files

fsTools.createFilesReceiver(async (files: Array<File>) => {
    const results = {};
    for (const file of files) {
        const charName = genTools.getCharName(file.name);
        console.log("%s =", charName);
        const result = await genTools.parseBin(file);
        console.log(result);
        results[charName] = result;
    }
    console.debug("Summary:");
    console.debug(results);
});

setTimeout(() => {
    console.log("genTools =", window.genTools);
    console.log("Ready to parse extracted *.bin");
});

//

window.genTools = (function(
    markTerminators = true,
    skipHeavyOperations = false,
){

const magics = {
    baseBinStart: "FF FF FF FF",
    charBinStart: "00 00 00 00",
    motionStart: "char_dat".split("").map(e => e.charCodeAt(0)).asAobStr,
    sectionStart: (
        "00 00 00 00 40 1F 00 00 80 3E 00 00 C0 5D 00 00 " +
        "00 7D 00 00 40 9C 00 00"
    ),
    sectionEnd: "00 50 C3 47",
};

return {
    parseBin,
    getCharName,
    collapse,
    compareMems,
    findMoveIdInCommandList,
    moveIdFindResultToString,
    dumpAllMoves,
    findMoveIdsFromInput,
    getAllMoveIdsFromMoveInfos,
    getAllMoveIdsFromMoveInputs,
    getAllMoveIdsFromHitTables,
    getAllMoveInputs,
    getMoveId,
    getMoveInfo,
    getAnimationInfo,
    reportTagThrows,
    buildCharacter,
    analyzeHitTables,
};

//

async function parseBin(file: File) {

    const charName = getCharName(file.name);

    // readonly
    const fileUint8Array = new Uint8Array(await file.arrayBuffer());

    //

    const fileType = getFileType(fileUint8Array);

    const isMotion  = fileType === "motion";
    const isBaseBin = fileType === "baseBin";
    const isCharBin = fileType === "charBin";
    const isMovesetBin = isBaseBin || isCharBin;

    // hsl stands for "Hexworkshop Structure Language" or something like that
    const hslHelper       = createHslHelper(markTerminators);
    const fileUsageHelper = createFileUsageHelper(file.name, fileUint8Array, skipHeavyOperations);
    const ignoreUnusedPattern = "00";

    // Blobls of unknown size to be post-process expanded until next referenced position in file
    const toExpand = new Array<ReadHResult<[Uint8Array]>>();

    // The main part of parsing the bin file

    const insights: any = getInsights(charName);

    let header = null;
    let hitTableEntries = null;
    let unlistedMoveInputs = null;
    let unusedHitTableEntries = null;
    if (isMotion) {
        header = parseMotion({ insights, fileUint8Array, readTypeH });
    } else {
        console.assert(isMovesetBin);
        const parseMovesetResult = parseMovesetBin({
            fileUint8Array,
            fileUsageHelper,
            isCharBin,
            insights,
            readTypeH,
            ignoreUnusedPattern,
        });
        header                = parseMovesetResult.header;
        hitTableEntries       = parseMovesetResult.hitTableEntries;
        unlistedMoveInputs    = parseMovesetResult.unlistedMoveInputs;
        unusedHitTableEntries = parseMovesetResult.unusedHitTableEntries;
    }

    // Detect overlaps

    const overlaps = fileUsageHelper.findOverlaps((fsa, fsb) => (
        // TODO: uncomment?
        // fsa.varPath.slice(0, 3).join(".") === "header.pArrayOfPtrsToInputCommands.->" &&
        // fsb.varPath.slice(0, 3).join(".") === "header.pArrayOfPtrsToInputCommands.->" &&

        // There are pointers that point to the same data, that's ok
        // TODO: compare readers?
        fsa.from === fsb.from &&
        fsa.to   === fsb.to
    ));

    if (overlaps.size > 0) {
        console.warn(
            "There are ~%i overlaps: %O",
            overlaps.size,
            fileUsageHelper.makeFoundOverlapsReadable(overlaps),
        );
    }

    if (!skipHeavyOperations) {
        expandUnknowns();
    }

    // Report unused chunks

    const unusedChunks = fileUsageHelper.findUnusedChunks(ignoreUnusedPattern).within;

    if (unusedChunks.length > 0) {
        hslHelper.markUnusedChunks(unusedChunks);
        let maxUnusedChunkSize = -Infinity;
        const totalUnusedSize = unusedChunks.reduce(
            (acc, chunk) => {
                const chunkSize = chunk.to.dehexUint - chunk.from.dehexUint;
                maxUnusedChunkSize = Math.max(chunkSize, maxUnusedChunkSize);
                return acc + chunkSize;
            },
            0,
        );
        const percentStr = "~" + (100 * totalUnusedSize / fileUint8Array.length).toFixed(2) + "%";
        console.warn(
            (
                "There are %i unused non-empty chunks " +
                `(${totalUnusedSize} bytes / ${percentStr}; ` +
                `max chunk size ${maxUnusedChunkSize} bytes)`
            ),
            unusedChunks.length,
            unusedChunks,
        );
    }

    //

    return {
        isBaseBin,
        isCharBin,
        isMotion,
        charName,
        fileUint8Array,
        header,
        hitTableEntries,
        fileUsageHelper,
        overlaps,
        unusedChunks,
        unlistedMoveInputs,
        unusedHitTableEntries,
        // Having this as a getter lets you run the code by clicking on "(...)" in chrome console
        get saveHslString() {
            return saveHslString({ unused: true, showUnusedFirst: true });
        },
        get saveHslStringWithoutUnused() {
            return saveHslString({ unused: false });
        },
        get saveHslStringWithoutSortingUnused() {
            return saveHslString({ unused: true, showUnusedFirst: false });
        },
    };

    //

    function saveHslString(params: { unused: boolean, showUnusedFirst?: boolean }) {
        const { hslCode, reportStr } = hslHelper.exportHslCode(
            `DOA5LR ${charName}.bin`,
            params,
        );
        (fsTools as any).saveAs(
            hslCode,
            `generated_${charName.replaceAll(" ", "_")}.hsl`,
        );
        return `done; ` + reportStr;
    }

    function readTypeH<T extends TypeH<any, any>>(typeH: T, posStart: number, varPath: VarPath) {
        const readHEnv: ReadHEnv = {
            fileUint8Array,
            getStructName:     hslHelper.getStructName,
            getArrayTypeName:  hslHelper.getArrayTypeName,
            getStructBodyLine: hslHelper.getStructBodyLine,
            markFileSection:   fileUsageHelper.markFileSection,
            reportPtr:         fileUsageHelper.reportPtr,
            rememberToExpand: e => { toExpand.push(e); },
            reportValidationFail,
        };
        return doReadTypeH(
            typeH,
            readHEnv, posStart, varPath, hslHelper.addHslString, hslHelper.addHslString, null,
        );
    }

    function expandUnknowns() {
        toExpand.sortAscending(e => e.posStart.dehexUint);
        const getSize = fileUsageHelper.createGetSize();
        for (const e of toExpand) {
            const size = getSize(e.posStart.dehexUint);
            e.rawU8A = fileUint8Array.subarray(e.posStart.dehexUint, e.posStart.dehexUint + size);
        }
    }

    function reportValidationFail(varPath: VarPath, pos: number, errorMessage: ErrorMessage) {
        console.warn(
            `Validation failed for ${finalizeName(varPath)} ` +
            `at ${pos.asXHexStr}: ` +
            errorMessage,
        );
    }
}

//

// TODO: types
function parseMovesetBin({
    fileUint8Array,
    fileUsageHelper,
    insights,
    isCharBin,
    readTypeH,
    ignoreUnusedPattern,
}) {
    // Detect and section end type
    // 1.02a has them, 1.10c doesn't
    const ignoreSectionEnd = !hasMagicAt(
        fileUint8Array,
        -magics.sectionEnd.aobLength,
        magics.sectionEnd,
    );

    // Validate file ending
    const fileEndMagicParts = [magics.sectionStart];
    if (!ignoreSectionEnd) {
        fileEndMagicParts.push(magics.sectionEnd);
    }
    const fileEndMagic = fileEndMagicParts.join(" ");
    console.assert(
        hasMagicAt(
            fileUint8Array,
            -fileEndMagic.aobLength,
            fileEndMagic,
        ),
    );

    //

    const {
        headerStruct,
        baseHeaderStruct,
        hitTableType,
    } = getStructs(
        insights,
        pos => fileUint8Array[pos],
    );

    const header = readTypeH(
        isCharBin ? headerStruct : baseHeaderStruct,
        0,
        ["header"],
    );

    //

    const hitTableEntries = [];
    if (isCharBin) {
        // Can't find an easy way to detect array size when the array is being parsed,
        // so instead after header was parsed, manually dereference "pointers" to hit table entries
        (header as any).v.pMoveInfosArray.d.v.forEach((v, catI) => {
            v.d.v.forEach((v, i) => {
                const type = v.v.moveType.v.dehexUint;
                if (type !== 0x02 && type !== 0x03) return;
                const indexInHitTable = v.v.secondId.v.dehexUint;
                hitTableEntries.push(
                    readTypeH(
                        hitTableType,
                        (header as any).v.pHitTable.v.dehexUint + indexInHitTable * 0x74,
                        [
                            "*(" +
                                "header.pHitTable + " +
                                "0x74 * " +
                                `header.pMoveInfosArray->[${catI}]->[${i}].secondId` +
                            ")",
                        ],
                    ),
                );
            });
        });
    }

    //

    // All moveset bins seem to have certain magic in several places,
    // as if they mark different sections; but I'm not sure it's being used as there are pointers
    // that point to actual data within these sections.
    // Still, mark them down so they don't show up as "unused"
    markSections();

    // Analyze what was parsed and what was left unused

    // Unlisted move inputs

    const unlistedMoveInputs = findUnlistedMoveInputs(
        fileUsageHelper.findUnusedChunks(
            ignoreUnusedPattern,
            findRange(
                // allListedMoveInputs
                (header as any).v.pArrayOfPtrsToInputCommands.d.v.map(
                    v => v.d.v.map(v => v.d),
                ).flatten(),
            ),
        ),
    );

    // Unused hit table entries

    let unusedHitTableEntries = [];
    if (isCharBin) {
        const rangeOfHitUsedHitTableEntries = findRange(hitTableEntries);
        unusedHitTableEntries = findUnusedHitTableEntries({
            ...rangeOfHitUsedHitTableEntries,
            min: Math.min(
                rangeOfHitUsedHitTableEntries.min,
                (header as any).v.pHitTable.v.dehexUint,
            ),
        });
    }

    // Unlisted ai combos

    // const aiCombosRange = [
    //     // TODO: include insight
    //     Math.min(
    //         fileUint8Array.length,
    //         ...(header as any).v.pAiData.d.v.pAiCombos.d.v.map(v => v.d.posStart.dehexUint),
    //     ),
    //     Math.max(
    //         0,
    //         ...(header as any).v.pAiData.d.v.pAiCombos.d.v.map(
    //             v => v.d.posStart.dehexUint + v.d.rawU8A.length,
    //         ),
    //     ),
    // ];

    // if (
    //     chunk.from >= aiCombosRange[0] &&
    //     chunk.to   <= aiCombosRange[1] &&
    //     unusedChunkConsistsOf(chunk, "28 00 00 00 00 00 00 00")
    // ) {
    //     return false;
    // }

    //

    return {
        header,
        hitTableEntries,
        unlistedMoveInputs,
        unusedHitTableEntries,
    };

    //

    function markSections() {
        const sectionStartAob = magics.sectionStart.dehexUintAob;
        const sectionEndAob   = magics.sectionEnd.dehexUintAob;

        const positions = findAobs(fileUint8Array, sectionStartAob, 0);
        positions.forEach((e, i) => {
            const end = findAob(fileUint8Array, sectionEndAob, e + sectionStartAob.length);
            if (end === -1 && !ignoreSectionEnd) throw new Error("section end not found");
            readTypeH(
                h.blob({ size: sectionStartAob.length }),
                e,
                ["sections", `[${i}]`, "start"],
            );
            if (end !== -1) {
                readTypeH(
                    h.blob({ size: sectionEndAob.length }),
                    end,
                    ["sections", `[${i}]`, "end"],
                );
            }
        });
    }

    function findUnlistedMoveInputs(
        chunksToCheck, // FIXME: type
    ) {
        return [
            ...reduceChunks("after",  chunksToCheck.after ? [chunksToCheck.after] : []),
            ...reduceChunks("within", chunksToCheck.within),
            ...reduceChunks("before", chunksToCheck.before ? [chunksToCheck.before] : []),
        ].reverse().map((e, i) => {
            return readTypeH(
                h.blob({ size: e.size }),
                e.pos,
                ["unlistedMoveInputs", `[${i}]`],
            );
        });

        function reduceChunks(
            type: "after" | "within" | "before",
            unusedChunks: Array<{ from: NumberAsX_HexStr, to: NumberAsX_HexStr }>,
        ) {
            if (!unusedChunks || unusedChunks.length === 0) return [];

            const result = [];

            let j = unusedChunks.length - 1;
            let chunk = unusedChunks[j];
            let pos = chunk.to.dehexUint - 1;
            if (type === "after") {
                while (
                    pos > chunk.from.dehexUint &&
                    fileUint8Array[pos] === 0 &&
                    fileUint8Array[pos - 1] === 0
                ) {
                    pos -= 1;
                }
                if (pos <= chunk.from.dehexUint + 1) return result;
            }

            while (true) {
                if (type === "before") {
                    if (
                        fileUint8Array[pos] === 0 &&
                        fileUint8Array[pos - 1] === 0
                    ) break;
                }

                const { size, result: readResult } = InputParser.readInput(
                    pos,
                    chunk.from.dehexUint,
                    readPos => fileUint8Array[readPos],
                );
                if (readResult.error) {
                    if (type === "after" && fileUint8Array[pos] === 0) {
                        pos -= 1;
                    } else {
                        console.warn(
                            `Failed to parse unlisted input at ${pos.asX_HexStr}:`,
                            readResult.error,
                            readResult,
                        );
                        pos = chunk.from.dehexUint - 1;
                    }
                } else {
                    result.push({
                        size: size,
                        pos: pos + 1 - size
                    });
                    pos -= size;
                }

                if (pos < chunk.from.dehexUint) {
                    j -= 1;
                    if (j < 0) break;
                    chunk = unusedChunks[j];
                    pos = chunk.to.dehexUint - 1;
                }

            }

            return result;
        }
    }

    function findUnusedHitTableEntries(
        chunksToCheck, // FIXME: type
    ) {
        return fileUsageHelper.findUnusedChunks(
            ignoreUnusedPattern,
            chunksToCheck,
        ).within.reduce((acc, chunk) => {
            console.assert((chunk.to.dehexUint - chunk.from.dehexUint) % 0x74 === 0);
            const result = Array.from(
                fileUint8Array.subarray(chunk.from.dehexUint, chunk.to.dehexUint),
            ).addDimension(0x74).map((subChunk, i) => readTypeH(
                hitTableType,
                chunk.from.dehexUint + i * 0x74,
                [`unusedHitTableEntry_${acc.length + i}`],
            ));
            return [...acc, ...result];
        }, []);
        // TODO: also include chunksToCheck.after and chunksToCheck.before?
    }
}

//

// TODO: types
function parseMotion({
    insights,
    fileUint8Array,
    readTypeH,
}) {
    console.log("(this can take a minute...)");

    const { motionStruct } = getStructs(insights, pos => fileUint8Array[pos]);

    const header = readTypeH(motionStruct, 0, ["header"]);

    return header;
}



//



function getInsights(charName: string) {

    const holdTableElements = {
        "kasumi":     { holdTableElements: 14 },
        "alpha":      { holdTableElements: 11 },
        "brad wong":  { holdTableElements:  9 },
        "mila":       { holdTableElements:  4 },
        "helena":     { holdTableElements: 10 },
        "kokoro":     { holdTableElements: 13 },
        "bayman":     { holdTableElements: 16 },
        "christie":   { holdTableElements:  8 },
        "rig":        { holdTableElements:  5 },
        "jann lee":   { holdTableElements: 11 },
        "zack":       { holdTableElements: 10 },
        "ayane":      { holdTableElements: 12 },
        "hayabusa":   { holdTableElements: 15 },
        "nyotengu":   { holdTableElements: 10 },
        "eliot":      { holdTableElements: 11 },
        "tina":       { holdTableElements: 12 },
        "lisa":       { holdTableElements: 10 },
        "akira":      { holdTableElements:  7 },
        "sarah":      { holdTableElements: 13 },
        "bass":       { holdTableElements: 12 },
        "leifang":    { holdTableElements: 20 },
        "hitomi":     { holdTableElements: 12 },
        "phase 4":    { holdTableElements: 15 },
        "hayate":     { holdTableElements: 12 },
        "raidou":     { holdTableElements: 10 },
        "marie rose": { holdTableElements: 17 },
        "momiji":     { holdTableElements:  5 },
        "gen fu":     { holdTableElements: 10 },
        "pai":        { holdTableElements: 19 }, // only first 5 are not FFs 
        "jacky":      { holdTableElements:  8 },
        "ein":        { holdTableElements:  8 },
        "rachel":     { holdTableElements:  4 },
        "leon" :      { holdTableElements: 10 },
        "honoka":     { holdTableElements: 14 },
    };

    return {
        // BASE insights
        ...{
            "BASE": {
                // 1.02a
                baseCommandListElements: 0x654 / 0xC, // 0x654 / 0xC = 135 (0x87)
                // 1.10c
                // baseCommandListElements: 0x69C / 0xC, // 0x69C / 0xC = 141 (0x8D)
            },
        }[charName],
        // common insights
        // ...
        // char specific insights
        ...{
            "rig": {
                throwTableElements: 0x140 / 0x28, // 8,
                headerIdk6Elements: 0x2B00 / 16,  // 0x2B0,
                headerIdk12Elements: 0x68 / 0x8,  // 0xD,
                headerIdk13Elements: 0x30 / 0x8,  // 6,
                // additonalMarks: [
                //     // ground attacks
                //     { from: 0x4b_80, size: 0x00_01, varName: "ga_2_k" },
                //     { from: 0x4b_a0, size: 0x00_01, varName: "ga_8_p_k" },
                //     { from: 0x4b_c0, size: 0x00_01, varName: "ga_8_s" },
                //     // move infos
                //     // { from: 0x7a_10, size: 0x00_08, varName: "src_of_ai_move_01_20" },
                //     // 0x00_91_30: pointer to info used by AI from section above "10 7A 00 00"
                //     // 0x01_17_60: move description "00 00 03 00  08 D7 00 00  E8 03 18 00"
                // ],
            },
            "bayman": {
                headerIdk12Elements: 0x78 / 0x8,
            },
        }[charName],
        ...holdTableElements[charName],
    };
}



// DOA5LR structs



function getStructs(
    insights: Record<string, any>,
    silentReadByte: (pos: number) => number,
) {
    return {
        headerStruct:     getHeaderStruct(),
        baseHeaderStruct: getBaseHeaderStruct(),
        hitTableType:     getHitTableType(),
        motionStruct:     getMotionHeaderStruct(),
    };

    // Entry point for motion files

    function getMotionHeaderStruct() {

        const insights = {
            motIdk2Size: 0x4C8 / 4,
        };

        const unknown = h.blob({ size: unknownBlobSize });

        const relToMotIdk1 = {
            getOffset: (parent: any) => {
                const parentStructPtr = parent._parent._parent;
                return parentStructPtr.v.motBase.posStart.dehexUint;
            },
        };

        return h.struct([
            [
                "unknown",
                h.blob(
                    { size: 0x40 },
                    [
                        "63 68 61 72 5F 64 61 74 00 00 01 01 30 00 00 00 " +
                        "00 22 30 00 01 00 00 00 01 00 00 00 00 00 00 00 " +
                        "30 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 " +
                        "40 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00"
                    ],
                ),
            ], [
                "motBase",
                h.blob(
                    { size: 0x20 },
                    [
                        "63 68 61 72 5F 64 61 74 00 00 01 01 30 00 00 00 " +
                        "C0 21 30 00 07 00 00 00 06 00 00 00 00 00 00 00"
                    ]
                ),
            ],
            [
                "pMotionSubHeader",
                h.ptr(
                    h.struct([
                        [
                            // pointers to actual animation data
                            "pPtrsToAnimations",
                            h.ptr(
                                h.array(
                                    // FIXME: this is only correct for Rig
                                    { elementsCount: insights.motIdk2Size },
                                    h.ptr(
                                        // array of 189 entries
                                        // each entry = ptr to timeline of animated property?
                                        // e.g. root.pos.x, root.rot.x, ...
                                        h.array(
                                            { elementsUntil: ["00 00 00 00"] },
                                            h.ptr(
                                                unknown,
                                                // h.blob({ size: 13 }), // FIXME: and then more
                                                // h.struct([
                                                //     ["zero", h.zero(1)],
                                                //     ["type", h.uint(1, [2, 3, 7])]
                                                //     // ...
                                                // ]),
                                                { getOffset: parent => parent._parent._parent._parent.v.dehexUint },
                                            ),
                                        ),
                                        { getOffset: parent => parent._parent.v.dehexUint },
                                    ),
                                ),
                                {
                                    getOffset: (parent: any) => {
                                        const parentStruct = parent._parent._parent;
                                        return parentStruct.v.motBase.posStart.dehexUint;
                                    },
                                },
                            ),
                        ],
                        ["zero", h.zero(4)],
                        ["pMotIdk3", h.ptr(unknown, relToMotIdk1) ],
                        ["pMotIdk4", h.ptr(unknown, relToMotIdk1) ],
                        ["pMotIdk5", h.ptr(unknown, relToMotIdk1) ],
                        [
                            // map of anim id -> index from pPtrsToAnimations
                            "pAnimationIndexPerAnimationId",
                            h.ptr(
                                h.struct([
                                    ["elementsCount", h.uint(4)],
                                    [
                                        "elements",
                                        h.array(
                                            { getElementsCount: (parent: any) => parent.v.elementsCount.v.dehexUint },
                                            h.struct([
                                                ["animId", h.uint(4)],
                                                // Index to use in pPtrsToAnimations
                                                ["index", h.uint(4)],
                                            ]),
                                        ),
                                    ],
                                ]),
                                relToMotIdk1,
                            ),
                        ],
                        [
                            // some additional info per anim id?
                            "pExtraInfoPerAnimId",
                            h.ptr(
                                h.array(
                                    {
                                        getShouldContinue: (i, pos, fileUint8Array) => {
                                            if (pos + 8 > fileUint8Array.length) {
                                                console.assert(false);
                                                return false;
                                            }
                                            return fileUint8Array.subarray(pos, pos + 2).asAobStr !== "FF FF";
                                        },
                                    },
                                    h.struct([
                                        ["animId", h.uint(4)],
                                        ["unknown", h.blob({ size: 2 })],
                                        ["payloadDwordsCount", h.uint(1)],
                                        ["unknown2", h.blob({ size: 1 })],
                                        [
                                            "payload",
                                            h.array(
                                                { getElementsCount: (parent: any) => parent.v.payloadDwordsCount.v.dehexUint },
                                                h.blob({ size: 4 }),
                                                { dontReportEmpty: true },
                                            ),
                                        ]
                                    ]),
                                ),
                                relToMotIdk1,
                            ),
                        ],
                    ]),
                    { getOffset: (parent: any) => parent.v.motBase.posStart.dehexUint },
                ),
            ],
        ]);
    }

    // Entry point for the base.bin (different from a someParticularCharacter.bin)

    function getBaseHeaderStruct() {
        return h.struct([
            ["magic", h.uint(4, [magics.baseBinStart.dehexUint])],

            ["pArrayOfPtrsToInputCommands", h.ptr(getArrayOfPtrsToInputCommandsType())],

            ["zeros1", h.array({ elementsCount: 0x48 / 4 }, h.zero(4))],

            ["pBaseSubHeader", h.ptr(getBaseSubHeaderType())],

            ["pTimelines", h.ptr(getTimelinesType())],

            ["zeros2", h.array({ elementsCount: 2 }, h.zero(4))],

            ["pAnimsOrder", h.ptr(h.array(
                { elementsUntil: ["FF FF FF FF"] },
                h.uint(4),
            ))],

            ["zeros3", h.array({ elementsCount: 0x24 / 4 }, h.zero(4))],

            ["pCharacterOverrides", h.ptr(getCharacterOverridesType())],

            ["pMoveInfos", h.ptr(getMoveInfosCategoryType())],

            ["zeros4", h.array({ elementsCount: 2 }, h.zero(4))],

            ["pBaseCommandList", 
                h.ptr(
                    // partially resembles pCommandListPtrs
                    h.array(
                        { elementsCount: insights.baseCommandListElements ?? 0 },
                        h.struct([
                            ["pInputStr",   h.ptr(h.zString())],
                            ["pHeightsStr", h.ptr(h.zString())],
                            ["unknown1",    h.uint(1)],
                            ["zero1",       h.zero(1)],
                            ["unknown2",    h.uint(1, [0x0, 0x3])],
                            ["zero2",       h.zero(1)],
                        ]),
                    ),
                ),
            ],

            ["zero5", h.zero(4)],
        ]);
    }

    function getBaseSubHeaderType() {

        // pointers until 00000000 to ... various kinds of data, one of which is getAiComboType()?
        // [0..77] = ptrs to stuff,
        // [78..155] = ptrs to where the respective stuff from 0...77 is no more

        type TempArg = (
            { elementsUntil: FlatAobStr } |
            { elementSize: number } |
            { constValue: FlatAobStr }
        );

        const createTempType = (arg: TempArg) => arg;

        const type1  = createTempType({ elementsUntil: "FFFF0000FFFF00000000000000000000" });
        const type2  = createTempType({ elementSize: 0x4 });  // total bytes: 0x01B8
        const type3  = createTempType({ elementSize: 0x2 });  // total bytes: 0x0030 // (post ground stuff?)
        const type4  = createTempType({ elementSize: 0x2 });  // total bytes: 0x000C // (post ground stuff?)
        const type5  = createTempType({ elementSize: 0x18 }); // total bytes: 0x18d8
        const type6  = createTempType({ elementSize: 0xc });  // total bytes: 0x03cc
        const type7  = createTempType({ elementsUntil: "FF000000FFFF0000FFFF0000" });
        const type8  = createTempType({ elementsUntil: "FFFFFFFF" });
        const type9  = createTempType({ elementsUntil: "FF000000FFFF0000" });
        const type10 = createTempType({ elementsUntil: "FFFF" });
        const type11 = createTempType({ elementSize: 0xC }); // total bytes: 0x3C
        const type12 = createTempType({ elementsUntil: "FFFF0000000000000000000000000000" });
        const type13 = createTempType({ constValue: "FF000000FFFF0000FFFF0000" });
        const type14 = createTempType({ constValue: "FF000000FFFF000000000000" });
        const type15 = createTempType({ elementSize: 0x3c }); // total bytes: 0x348
        const type16 = createTempType({ elementSize: 0xc });  // total bytes: 0x15C
        const type17 = createTempType({ elementSize: 0x1 });  // total bytes: 0x165 // wtf
        const type18 = createTempType({ elementsUntil: "FF00000000000000" });
        const type19 = createTempType({ elementSize: 0x14 }); // total bytes: 0xADC
        const type20 = createTempType({ elementSize: 0x4 });  // total bytes: 0x050
        const type21 = createTempType(
            { elementsUntil: "FF000000FFFF0000FFFF0000FFFF0000FFFF0000000000000000000000000000" },
        );
        const type22 = createTempType({ elementSize: 0x14 }); // total bytes: 0x2F8
        const type23 = createTempType({ elementsUntil: "FF00FFFF00000000" });
        const type24 = createTempType({ elementSize: 0x2C }); // total bytes: 0x39c0
        const type25 = createTempType({ elementSize: 0x18 }); // total bytes: 0x0090
        const type26 = createTempType({ elementSize: 0x14 }); // total bytes: 0x06f4
        const type27 = createTempType({ elementsUntil: "FF000000FFFF000000000000" });
        const type28 = createTempType({ elementsUntil: "FF000000FFFF0000000000000000000000000000" });
        const type29a = createTempType({ elementsUntil: "FFFF00000000000000000000" });
        const type29b = createTempType({ elementsUntil: "FFFF000000000000" });
        const type30 = createTempType({ elementSize: 0x4 }); // total bytes: 0x40

        const typesOrder = [
            type1,  // index  0
            type1,  // index  1
            type1,  // index  2
            type1,  // index  3
            type1,  // index  4
            type1,  // index  5
            type1,  // index  6
            type1,  // index  7
            type1,  // index  8
            type1,  // index  9
            type2,  // index 10
            type3,  // index 11
            type3,  // index 12
            type3,  // index 13
            type4,  // index 14
            type5,  // index 15
            type6,  // index 16
            type7,  // index 17
            type1,  // index 18
            type1,  // index 19
            type8,  // index 20
            type1,  // index 21
            type1,  // index 22
            type9,  // index 23
            type9,  // index 24
            type1,  // index 25
            type10, // index 26
            type11, // index 27
            type10, // index 28
            type12, // index 29
            type8,  // index 30
            type13, // index 31
            type9,  // index 32
            type14, // index 33
            type1,  // index 34
            type1,  // index 35
            type1,  // index 36
            type1,  // index 37
            type1,  // index 38
            type1,  // index 39
            type1,  // index 40
            type1,  // index 41
            type1,  // index 42
            type1,  // index 43
            type15, // index 44
            type16, // index 45
            type4,  // index 46
            type17, // index 47
            type18, // index 48
            type18, // index 49
            type1,  // index 50
            type19, // index 51
            type1,  // index 52
            type20, // index 53
            type1,  // index 54
            type21, // index 55
            type22, // index 56
            type23, // index 57
            type24, // index 58
            type25, // index 59
            type26, // index 60
            type1,  // index 61
            type1,  // index 62
            type1,  // index 63
            type1,  // index 64
            type27, // index 65
            type28, // index 66
            type9,  // index 67
            type29a, // index 68
            type29a, // index 69
            type29b, // index 70
            type9,  // index 71
            type1,  // index 72
            type1,  // index 73
            type1,  // index 74
            type1,  // index 75
            type30, // index 76
            type7,  // index 77
        ];

        const getStartName = (i: number) => `pData${i}_start`;
        const getEndName   = (i: number) => `pData${i}_end`;

        return h.struct([
            ...typesOrder.map((e, i) => [getStartName(i), createGetType(e, i)] as any),
            ...typesOrder.map((e, i) => [getEndName(i),   h.uint(ptrSize)]     as any),
            ["zero", h.zero(4)],
        ]);

        function createGetType(e: TempArg, i: number) {
            return h.ptr(parent => {
                const endsAt = parent.v[getEndName(i)].v.dehexUint;
                if ("elementsUntil" in e) {
                    const terminator: AobStr = e.elementsUntil.dehexUintAob.map(
                        e => e.asAobStr,
                    ).join(" ");
                    const elementSize = terminator.aobLength;
                    return h.struct([
                        ["payload", h.array(
                            { elementsUntilPtr: endsAt - elementSize },
                            h.blob({ size: elementSize }),
                        )],
                        ["terminator", h.blob(
                            { size: elementSize },
                            [terminator],
                        )],
                    ]);
                } else
                if ("elementSize" in e) {
                    return h.array(
                        { elementsUntilPtr: endsAt },
                        h.blob({ size: e.elementSize }),
                    );
                } else
                if ("constValue" in e) {
                    const expectedValue: AobStr = e.constValue.dehexUintAob.map(
                        e => e.asAobStr,
                    ).join(" ");
                    return h.blob(
                        { size: expectedValue.aobLength },
                        [expectedValue],
                    );
                }
                throw new Error("Unexpected argument");
            });
        }
    }

    // Entry point for the someParticularCharacter.bin

    // as of v1.02a steam, this seems to be loaded to
    // ([(p2 ? 0 : 1 ) * 0x488+game.exe+D7BB5D] * 0x27 + 0x02) * 4 + game.exe + 1DFF398 - 8
    // so pointer pHitTable will be found at that addr + 8
    function getHeaderStruct() {
        const throwAndHoldInfosType = getThrowsAndHoldsInfosType();

        const collisionSphereType = h.array(
            { elementsUntil: ["00 00 00 00"] },
            h.ptr(
                h.struct([
                    ["unknown", h.uint(2)], // at least for hitboxes, this _does not_ mean which bone to use, changing 6 to 7 or 8 changed nothing
                    ["zero",    h.zero(2)],
                    // XYZ
                    ["offset", h.array({ elementsCount: 3 }, h.float()) ],
                    ["radius", h.float()],
                ]),
            ),
        );
        const collisionCapsuleType = h.array(
            { elementsUntil: ["00 00 00 00"] },
            h.ptr(
                h.struct([
                    ["unknown", h.uint(2)],
                    ["zero",    h.zero(2)],
                    ["offsetStart", h.array({ elementsCount: 3 }, h.float()) ],
                    ["offsetEnd",   h.array({ elementsCount: 3 }, h.float()) ],
                    ["radius", h.float()],
                ]),
            ),
        );
        const collisionIdkType = h.array(
            { elementsUntil: ["00 00 00 00"] },
            // TODO: structure
            // array of elements of 3 bytes until "FF"; 1st byte tells where to copy (0..14, id of the bone?) the next 2 bytes
            // For rig:
            //  1st byte is 0..14 - id of bone/socket?
            //  2nd byte is always 01
            //  3rd byte from 00 to 1B but there are gaps (tells index of data to use from pCollision*, e.g. pCollision1_spheres1 for hitboxes)
            //  Also 3rd byte mostly matches 1st byte (but not always)
            h.ptr(bytesUntilFFType),
        );

        const {
            pCommandListPtrsType,
            pCommandListSizesType,
        } = getCommandListTypes();

        return h.struct([
            ["magic", h.uint(4, [magics.charBinStart.dehexUint])],

            ["pArrayOfPtrsToInputCommands", h.ptr(getArrayOfPtrsToInputCommandsType())],
            ["pHitTable", h.ptr(dontDereferencePtr)],
            ["pHoldTable", h.ptr(
                h.array(
                    { elementsCount: insights.holdTableElements ?? 1 },
                    h.struct([
                        ["highP", h.uint(2)],
                        ["highK", h.uint(2)],
                        ["midP",  h.uint(2)],
                        ["midK",  h.uint(2)],
                        ["lowP",  h.uint(2)],
                        ["lowK",  h.uint(2)],
                        // TODO: validate that it's either 0 or dup
                        // Presumably the same for the opposite stance?
                        ["legacy_highP", h.uint(2)],
                        ["legacy_highK", h.uint(2)],
                        ["legacy_midP",  h.uint(2)],
                        ["legacy_midK",  h.uint(2)],
                        ["legacy_lowP",  h.uint(2)],
                        ["legacy_lowK",  h.uint(2)],
                    ]),
                )),
            ],
            ["pGroundHitTable", h.ptr(getGroundHitTableType())],
            // Something to do with ground attacks
            // Is read when ground attack lands on opponent who's waking up
            // perhaps move ids, based on orientation?
            ["pPostGroundHitTable", h.ptr(
                h.blob({
                    elementsWhile: [
                        "?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? 9D 61 9E 61",
                        // "03 7D 03 7D 03 7D 04 7D 04 7D 04 7D 9D 61 9E 61", // rachel
                        // "07 7D 07 7D 07 7D 08 7D 08 7D 08 7D 9D 61 9E 61", // tengu
                        // "0A 7D 0A 7D 0A 7D 0B 7D 0B 7D 0B 7D 9D 61 9E 61", // jann lee
                        // "16 7D 16 7D 16 7D 17 7D 17 7D 17 7D 9D 61 9E 61", // zack
                        // "6F 61 70 61 71 61 72 61 73 61 74 61 9D 61 9E 61", // common
                        // "F4 61 F5 61 F6 61 F7 61 F8 61 F9 61 9D 61 9E 61", // common
                        //  ^^^^^ ^^^^^ ^^^^^ ^^^^^ ^^^^^ ^^^^^ ^^^^^ ^^^^^
                    ],
                })
            )],
            ["pThrowInfos", h.ptr(throwAndHoldInfosType)],
            ["pHoldInfos",  h.ptr(throwAndHoldInfosType)],

            ["zero1", h.zero(4)],

            ["pAiData",      h.ptr(getAiDataType())],
            ["pAiData_dup1", h.ptr(dontDereferencePtr), validateDupOf("pAiData")],
            ["pAiData_dup2", h.ptr(dontDereferencePtr), validateDupOf("pAiData")],
            ["pAiData_dup3", h.ptr(dontDereferencePtr), validateDupOf("pAiData")],

            // hitboxes, hurtboxes and pushboxes?
            ["pCollision1_spheres1", h.ptr(collisionSphereType)], // hitboxes
            ["pCollision1_capsules", h.ptr(collisionCapsuleType)],
            ["pCollision1_spheres2", h.ptr(collisionSphereType)],
            ["pCollision2_spheres1", h.ptr(collisionSphereType)],
            ["pCollision2_capsules", h.ptr(collisionCapsuleType)],
            ["pCollision2_spheres2", h.ptr(collisionSphereType)],
            ["pCollisionIdk", h.ptr(collisionIdkType)],

            [
                "pIdk6",
                h.ptr(
                    h.array(
                        { elementsCount: insights.headerIdk6Elements ?? 1 },
                        h.blob({ size: 16 }),
                    )
                ),
            ],

            // Something to do with animations and sounds
            ["pTimelines", h.ptr(getTimelinesType())],

            ["zero2", h.zero(4)],
            ["zero3", h.zero(4)],

            ["pAnimsOrder", h.ptr(h.array(
                { elementsUntil: ["FF FF FF FF"] },
                h.uint(4),
            ))],
            ["pIdk9",  h.ptr(h.blob({ size: unknownBlobSize }))],
            ["pIdk10", h.ptr(h.blob({ size: unknownBlobSize }))],

            // bayman got 4 bytes here, "CD CC 4C 3E", no terminator
            // rig got nothing here (2 lines of 0s)
            ["pIdk11", h.ptr(h.blob({ size: unknownBlobSize }))],

            ["pIdk12", h.ptr(getIdk12Type())],

            ["pIdk98", h.ptr(getIdk98Type())],

            // points to throw move Ids + some data
            // completely broken for mila, marie and honoka
            // non-fixed length, no terminator
            // for marie and honoka, structure seems to resemble *(pCommandListPtrs[])
            ["pIdk13", h.ptr(getIdk13Type())],

            // for jann lee, 2 pointers to "00" and "0A"
            // for everyone else, 1 pointer to "00"
            ["pIdk14", h.ptr(h.array(
                { elementsUntil: ["FF FF FF FF"] },
                h.ptr(bytesUntilFFType),
            ))],

            ["pThrowTable", h.ptr(getThrowTableType())],

            ["pMoveInfosArray", h.ptr(getMoveInfosArrayType())],
            ["pCharacterOverrides", h.ptr(getCharacterOverridesType())],

            ["zero4", h.zero(4)],

            ["pCommandListPtrs",  pCommandListPtrsType],
            ["pCommandListSizes", pCommandListSizesType],

            ["zero5", h.zero(4)],
            ["zero6", h.zero(4)],
        ]);
    }

    function getHitTableType() {

        // const elementsCount = Math.max(
        //     ...genTools.getAllMoveIdsFromMoveInfos(parsed.bins.rig).map(
        //         moveId => genTools.getMoveInfo(parsed.bins.rig, moveId)
        //     ).groupBy(
        //         e => e.rawU8A[2].asAobStr,
        //     ).sortAscending(e => e.value).map(e => {
        //         return {
        //           value: e.value,
        //           min: Math.min(...e.matches.map(m => m.rawU8A[3] === 255 ?  Infinity : m.rawU8A[3])),
        //           max: Math.max(...e.matches.map(m => m.rawU8A[3] === 255 ? -Infinity : m.rawU8A[3])),
        //         };
        //     }).filter(e => e.value === "02" || e.value === "03").map(e => e.max + 1)
        // );

        // size = 0x74 bytes
        return h.struct([
            // stun move id examples: EB 5D = lift stun, 3F 5E = sit-down stun
            ["nh",               h.uint(2)], ["zero01", h.zero(2)], // also used for natrual combos
            ["legacyBtNh",       h.uint(2)], ["zero02", h.zero(2)], // not actually used
            ["block",            h.uint(2)], ["zero03", h.zero(2)],
            ["ch",               h.uint(2)], ["zero04", h.zero(2)],
            ["btCh",             h.uint(2)], ["zero05", h.zero(2)], // bt nh uses this too

            // changing this is enough to change critical reversal reaction
            // but changing moveInfo that corresponds to this value doesn't affect it
            // because depending on open/closed stance value can be increased by 1 and I was changing wrong one?..
            // critical reversal is this + 0x204?..
            ["hch",              h.uint(2)], ["zero06", h.zero(2)], // also used by stuns
            ["btHch",            h.uint(2)], ["zero07", h.zero(2)],
            ["crouchNh",         h.uint(2)], ["zero08", h.zero(2)],
            ["legacyCrouchBtNh", h.uint(2)], ["zero09", h.zero(2)], // not actually used
            ["crouchBlock",      h.uint(2)], ["zero10", h.zero(2)],
            ["crouchCh",         h.uint(2)], ["zero11", h.zero(2)],
            ["crouchBtCh",       h.uint(2)], ["zero12", h.zero(2)], // crouch bt nh uses this too
            ["crouchHch",        h.uint(2)], ["zero13", h.zero(2)],
            ["crouchBackHch",    h.uint(2)], ["zero14", h.zero(2)],
            ["juggle",           h.uint(2)], ["zero15", h.zero(2)],
            ["juggleBt",         h.uint(2)], ["zero16", h.zero(2)],
            ["groundHitG86",     h.uint(2)], ["zero17", h.zero(2)],
            ["groundHitG8R",     h.uint(2)], ["zero18", h.zero(2)], // "R" for "rest" (2/4/8)
            ["groundHitG24",     h.uint(2)], ["zero19", h.zero(2)],
            ["groundHitG2R",     h.uint(2)], ["zero20", h.zero(2)], // "R" for "rest" (2/6/8)

            ["moveType1", h.uint(2)], // 0 = high p, 1 = high k, 2 = mid P, 3 = mid K, 4 = low P, 5 = low K, "EB FF" = unholdable high kick (maybe jumping)
            ["moveType2", h.uint(2)], // ??? something to do with move height?

            // but doesn't apply e.g. on block (unless it's gb) or on hit that caused wall bounce (wall ricochet is fine)
            ["moveIdOnHit", h.uint(2)],

            ["zero21", h.zero(2)],

            // for all rig's strikes it's 0x9, except his post-charge pb(super) which has value 0
            ["hitTableIdk1", h.uint(1, [0, 9])],

            ["disadvantageBlock", h.uint(1)], // useless for GB
            ["disadvantageNh",    h.uint(1)], // useless for stun
            ["disadvantageCh",    h.uint(1)], // useless for stun
            ["disadvantageHch",   h.uint(1)], // useless for stun

            // for most rig's strikes (320/348) has value of 0, for rest = 1
            ["hitTableIdk2", h.uint(1, [0, 1])],
            // for most rig's strikes (291/348) has value of 0, for rest = 1
            ["hitTableIdk3", h.uint(1, [0, 1])],

            ["dmg", h.uint(1)],

            ["knocbkack", h.float()],

            ["hitTableMagic1", h.uint(4, ["9A 99 99 3E".dehexUint])], // a float?

            // for most rig's strikes (284/348) has value of 0, for rest = 1
            ["hitTableIdk5", h.uint(1, [0, 1])],

            ["knockbackForCounterPlusOnly", h.uint(1, [0, 1])],

            ["hitTableMagic2", h.uint(1, [1])], // is 0 for akira?
            ["tracking",       h.uint(1, [0, 1])], // also has value of 2 for somet moves?..

            ["zero22", h.zero(4)],
            ["zero23", h.zero(4)],
        ]);
    }

    function getThrowTableType() {
        return h.array(
            { elementsCount: insights.throwTableElements ?? 1 },
            h.struct([
                ["nhReaction",     h.uint(2)],
                ["chReaction",     h.uint(2)],
                ["btNhReaction",   h.uint(2)],
                ["btChReaction",   h.uint(2)],
                ["throwTableIdk1", h.blob({ size: 8 })],
                ["throwTableIdk2", h.uint(4, [0xFF_FF_FF_FF])],
                ["throwTableIdk3", h.uint(4, [0xFF_FF_FF_FF])],
                ["throwTableIdk4", h.uint(4, [0xFF_FF_FF_FF])],
                ["throwTableIdk5", h.uint(4, [0xFF_FF_FF_FF])],
                ["throwTableIdk6", h.blob({ size: 8 })],
            ]),
        );
    }

    function getGroundHitTableType() {
        return h.array(
            {
                elementsUntil: [
                    "00 00 00 00 FF FF FF FF 00 00 00 00 00 00 00 00 " +
                    "00 00 00 00 00 00 00 00 FF FF FF FF 01 00 00 00"
                ],
            },
            h.struct([
                ["groundHitTableIdk1", h.blob({ size: 4 })],
                [
                    "pGroundHitDamage",
                    h.ptr(h.array({ elementsUntil: ["FF"] }, h.uint(1))),
                ],
                ["groundHitTableIdk2", h.blob({ size: 0x10 })],

                ["missMoveId", h.uint(2)], // or vise versa
                ["hitMoveId",  h.uint(2)], // or vise versa

                ["groundHitTableIdk3", h.blob({ size: 4 })],
            ]),
        );
    }

    function getThrowsAndHoldsInfosType() {
        return h.array(
            {
                elementsUntil: [
                    "00 00 00 00 00 00 00 00 FF FF FF FF 00 00 00 00 " +
                    "00 00 00 00 00 00 00 00",
                ],
            },
            h.struct([
                ["unknownFloat",  h.float()],
                ["unknownFlag1",  h.uint(1, [0, 1])],
                ["unknownFlag2",  h.uint(1, [0, 1])],
                ["zero1",         h.zero(1)],
                ["zero2",         h.zero(1)],
                ["pDmgs",         h.ptr(h.array({ elementsUntil: ["FF"] }, h.uint(1)))],
                ["zero3",         h.zero(1)],
                ["canWallsplat",  h.uint(1, [0, 1])],
                ["zero4",         h.zero(2)],
                ["knockback",     h.float()], // for wallsplat reasons
                ["unknown1",      h.uint(2)],
                ["unknown2",      h.uint(2)],
            ]),
        );
    }

    function getIdk13Type() {
        return h.array(
            { elementsCount: insights.headerIdk13Elements ?? 1 },
            h.struct([
                ["throwMoveId", h.uint(2)],
                ["zero1", h.zero(2)],
                ["zero2", h.zero(1)],
                ["one",   h.uint(1, [1])],
                ["zero3", h.zero(2)],
            ]),
        );
    }

    // 

    function getArrayOfPtrsToInputCommandsType() {
        return h.array(
            { elementsUntil: ["00 00 00 00"] },
            h.ptr(
                h.array(
                    { elementsUntil: ["00 00 00 00"] },
                    h.ptr(
                        // move input
                        h.blob({
                            getBlobProps: posStart => {
                                const { size, result } = InputParser.readInput(
                                    posStart,
                                    0,
                                    silentReadByte,
                                );
                                // TODO: move out from "get props" and use reportValidationFail
                                if (result.error) {
                                    console.warn(
                                        `Failed to parse input at ${posStart.asX_HexStr}:`,
                                        result.error,
                                        result,
                                    );
                                }
                                return {
                                    size,
                                    payloadPosMin: posStart + 1 - size,
                                };
                            },
                        }),
                    ),
                    { dontReportEmpty: true },
                ),
            ),
        );
    }

    //

    // no terminator, not fixed size
    function getIdk12Type() {
        return h.array(
            { elementsCount: insights.headerIdk12Elements ?? 1 },
            h.struct([
                ["idk12idk1", h.uint(1, [0])],
                ["idk12idk2", h.uint(1, [0, 1, 0xFF])],
                ["idk12idk3", h.uint(2, [0x00_FF])],
                ["idk12idk4", h.uint(4, [0x3F_8C_CC_CD])], // a float?
            ]),
        );
    }

    function getIdk98Type() {
        return h.array(
            { elementsUntil: ["FF FF 00 00 00 00 00 00"] },
            h.struct([
                ["unknown1", h.uint(2)],
                ["zero1",    h.zero(2)],
                ["unknown2", h.uint(2)],
                ["zero2",    h.zero(2)],
            ]),
            { dontReportEmpty: true },
        );
    }

    // ai data

    // messing with this can break "sidestep option" select from char select screen
    function getAiDataType() {

        // Duplicates:

        // alpha, hayabusa, nyotengu, phase 4, raidou, marie rose, momiji, jacky, rachel, leon, honoka
        // pIdk19[[0, 1, 2, 3, 4, 5, 6]]
        // pIdk21[[0, 1, 2, 3, 4, 5, 6]]
        // pIdk20[[0, 1, 2, 3, 4, 5, 6]]

        // ayane, sarah, leifang
        // pIdk19[[0, 3, 4, 5], [1], [2], [6]]
        // pIdk21[[0, 3, 4, 5], [1], [2], [6]]
        // pIdk20[[0, 1, 2, 3, 4, 5], [6]]

        // bayman, eliot, hayate
        // pIdk19[[0, 5, 6], [1], [2], [3], [4]]
        // pIdk21[[0, 5, 6], [1], [2], [3], [4]]
        // pIdk20[[0, 1, 2, 3, 4, 5, 6]]

        // mila, christie, lisa
        // pIdk19[[0], [1], [2], [3], [4], [5], [6]]
        // pIdk21[[0], [1], [2], [3], [4], [5], [6]]
        // pIdk20[[0, 1, 2, 3, 4, 5], [6]]

        // kasumi, hitomi
        // pIdk19[[0, 5], [1], [2], [3], [4], [6]]
        // pIdk21[[0, 5], [1], [2], [3], [4], [6]]
        // pIdk20[[0, 1, 2, 3, 4, 5], [6]]
        
        // helena, pai
        // pIdk19[[0, 1, 2, 3, 4, 5], [6]]
        // pIdk21[[0, 1, 2, 3, 4, 5], [6]]
        // pIdk20[[0, 1, 2, 3, 4, 5], [6]]
        
        // rig, brad wong
        // pIdk19[[0, 4, 5, 6], [1], [2], [3]]
        // pIdk21[[0, 4, 5, 6], [1], [2], [3]]
        // pIdk20[[0, 1, 2, 3, 4, 5, 6]]

        // kokoro
        // pIdk19[[0, 3, 4, 5], [1], [2], [6]]
        // pIdk21[[0, 3, 4, 5], [1], [2], [6]]
        // pIdk20[[0, 1, 3, 4, 5], [2], [6]]

        // jann lee
        // pIdk19[[0, 3, 4, 5, 6], [1], [2]]
        // pIdk21[[0, 3, 4, 5, 6], [1], [2]]
        // pIdk20[[0, 1, 2, 3, 4, 5, 6]]

        // zack
        // pIdk19[[0], [1], [2], [3], [4], [5], [6]]
        // pIdk21[[0], [1], [2], [3], [4], [5], [6]]
        // pIdk20[[0, 1, 2, 3, 4, 5, 6]]

        // tina
        // pIdk19[[0, 4, 5], [1], [2], [3], [6]]
        // pIdk21[[0, 4, 5], [1], [2], [3], [6]]
        // pIdk20[[0, 1, 2, 3, 4, 5], [6]]

        // akira
        // pIdk19[[0, 2, 3, 4, 5, 6], [1]]
        // pIdk21[[0, 2, 3, 4, 5, 6], [1]]
        // pIdk20[[0, 1, 2, 3, 4, 5, 6]]

        // bass
        // pIdk19[[0, 5, 6], [1], [2], [3], [4]]
        // pIdk21[[0, 5, 6], [1], [2], [3], [4]]
        // pIdk20[[0, 1, 2, 4, 5, 6], [3]]
        
        // gen fu
        // pIdk19[[0, 3, 4, 5, 6], [1], [2]]
        // pIdk21[[0, 3, 4, 5, 6], [1], [2]]
        // pIdk20[[0, 3, 4, 5, 6], [1], [2]]
        
        // ein
        // pIdk19[[0, 2, 3, 4, 5, 6], [1]]
        // pIdk21[[0, 2, 3, 4, 5, 6], [1]]
        // pIdk20[[0, 2, 3, 4, 5, 6], [1]]

        const terminator = "00 00 00 00 FF FF 00 00 09 00 00 00";
        const idk19AndIdk20SubType = h.array(
            { elementsUntil: [terminator] },
            // momiji:
            // total of 28+16+22 = 66 pointers to lists, 64 are unique
            // 64 unique pointers to arrays accumulate 461 elements, 257 are unique
            // XX 00 00 00 YY 00 00 00 05 ZZ 00 00
            // XX = one of 00 05 0A 0F 14 19 1E 28 32 3C 46 50 5A 64
            // YY = one of 01 02 03 04 05 06 07 08 09 0A       0D 0E 0F 10
            //             11 12 13 14 15 16 17 18 19 1A 1B 1C    1E 1F 20
            //             21       24 25 26 27 28    2A 2B 2C 2D    2F
            //                   33 34                      3C    3E 3F
            //                      44                4A 4B             50
            //                52 53          57 58          5C    5E 5F 60
            //                                  68    6A    6C 6D    6F 70
            //             71    73 74 75 76 77 78 79 7A 7B 7C 7D 7E 7F 80
            //             81 82 83 84    86 87    89 8A 8B
            //                   93 94 95 96 97 98 99
            //                                     A9
            // ZZ = one of 01 02 03 04 07 08 0C 0F 10 1C 1F 20 38 3C 3F 40 7C 80 C0 FC FF
            // when changing all lists to point to "10 68 00 00":
            // 14 00 00 00 58 00 00 00 05 3F 00 00 = 2T
            // if that list would consist of 2 entries, AI would somehow pick one  
            // modifying that to ... yields ...
            // 14 00 00 00 52 00 00 00 05 3F 00 00 = 5T
            // 14 00 00 00 53 00 00 00 05 3F 00 00 = 6T
            // 14 00 00 00 57 00 00 00 05 03 00 00 = 426T
            // 14 00 00 00 13 00 00 00 05 3F 00 00 = 6pkp combo
            // 14 00 00 00 13 00 00 00 05 07 00 00 = 6pkp combo
            // 14 00 00 00 1C 00 00 00 05 3F 00 00 = 1p2k combo
            // 14 00 00 00 5E 00 00 00 05 03 00 00 = 4h
            //             ^^
            //             ++--- index from pAiCombos?
            h.blob({ size: terminator.aobLength }),
            { dontReportEmpty: true },
        );
        
        return h.struct([

            [
                "pIdk19",
                h.array(
                    { elementsCount: 7 },
                    h.ptr(h.struct([
                        ["from00To27", h.array({ elementsCount: 28 }, h.ptr(idk19AndIdk20SubType))],
                        // FIXME: 28...31 are different for some reason
                        // For rig doesn't seem to have actual payload
                        ["from28to31", h.array({ elementsCount:  4 }, h.ptr(h.blob({ size: unknownBlobSize })))],
                        ["from32to47", h.array({ elementsCount: 16 }, h.ptr(idk19AndIdk20SubType))],
                    ])),
                ),
            ],
            [
                // pAiBehavior
                "pIdk21",
                h.array(
                    { elementsCount: 7 },
                    h.ptr(h.struct([
                        // required distance for certain groups?
                        // is compared with current distance to opponent, at least some of them
                        ["someFloats", h.array({ elementsCount: 5 }, h.float())],
                        // strikes / (safe/low strikes) / throws / holds
                        // sums up to 100 (usually)
                        ["aiOffenseTypeWeights", h.array({ elementsCount: 4 }, h.uint(1))],
                        // strikes / crushes / throws / OHs
                        // sums up to 100 (usually)
                        ["aiDefenseTypeWeights", h.array({ elementsCount: 4 }, h.uint(1))],
                        ["zero", h.zero(4)],
                    ])),
                ),
            ],
            [
                // pAiAdditionalMixups?
                "pIdk20",
                h.array(
                    { elementsCount: 7 },
                    h.ptr(h.array({ elementsUntil: ["00 00 00 00"] }, h.ptr(idk19AndIdk20SubType))),
                ),
            ],

            [
                "pAiCombos",
                h.ptr(parent => h.array(
                    { elementsCount: parent.v.aiCombosAmount.v.dehexUint },
                    h.ptr(getAiComboType()),
                )),
            ],

            ["aiCombosAmount", h.uint(2, validateNotZero)],
        ]);
    }

    function getAiComboType() {
        return h.array(
            {
                elementsUntil: [
                    "28 00 00 00 00 00 00 00",

                    // FIXME: include in the payload?
                    // "00 00 00 00 00 00 00 00",
                    // "01 00 00 00 00 00 00 00",
                    // "05 00 00 00 ?? ?? 00 00",
                    // "06 00 00 00 96 00 00 00",
                    // "06 00 00 00 97 00 00 00",
                    // "24 00 00 00 ?? 00 00 00",
                    // "25 00 00 00 ?? 00 00 00",
                    // "28 00 00 00 ?? 00 00 00",
                    // "1F 00 00 00 ?? 00 00 00",
                    // "1F 00 00 00 ?? 01 00 00",
                    // "1F 00 00 00 ?? 02 00 00",
                    // "2A 00 00 00 3D 00 00 00",
                    // "2A 00 00 00 3E 00 00 00",
                    // "7F 00 00 00 00 00 00 00",

                    // "28 00 00 00 00 00 00 00",
                    // "1F 00 00 00 45 00 00 00",
                    // "1F 00 00 00 4C 00 00 00",
                    // "1F 00 00 00 4C 01 00 00",
                    // "1F 00 00 00 CA 00 00 00",
                    // "1F 00 00 00 CB 00 00 00",
                    // "1F 00 00 00 CC 00 00 00",
                    // ???
                    // "24 00 00 00 1C 00 00 00",
                    // "00 00 00 00 00 00 00 00",
                ],
            },
            h.struct([
                ["commandType", h.uint(1/*, [
                    // from Rig's data:
                    0x0, 0x1, 0x2, 0x5, 0x6, 0x8, 0xC, 0xE, 0xF, 0x11, 0x1F, 0x24, 0x25, 0x27,
                    0x2A, 0x2E, 0x30, 0x32, 0x35, 0x3C, 0x60, 0x72, 0x79, 0x7E, 0x92, 0x93,
                ]*/)],
                // VV
                // 00 00 00 00 XX XX 00 00 // first, starting move id
                // 02 00 00 00 XX XX 00 00 // previous chain to move id (can stack up)

                // 25 00 00 00 01 00 00 00 // stance? bt? ability to cancel?.. (e.g. 3k6k4)
                // 25 00 00 00 02 00 00 00 // stance? bt? ability to cancel?.. (e.g. pp4)

                // 0C 00 00 00 05 00 00 00 // ??? (e.g. 1kk, 6kk4)
                // 0C 00 00 00 07 00 00 00 // ??? (e.g. 4k)
                // 0C 00 00 00 0A 00 00 00 // ??? crouching? (e.g. unsued 2(crouch)?)
                // 0C 00 00 00 0C 00 00 00 // ??? (e.g. kk)

                // ...

                // 28 00 00 00 00 00 00 00 // end
                ["unknown",    h.uint(1, [0, 31, 32])],
                ["zero1",      h.zero(2)],
                ["commandArg", h.uint(2)],
                ["zero2",      h.zero(2)],

            ]),
            { dontReportEmpty: true },
        );
    }

    //

    function getMoveInfosArrayType() {
        // does this map out to move category?
        // 0..0x1f40..0x3e80..0x5dc0..0x7d00..0x9c40
        // TODO: confirm if the category order correct, or [0, 1, 2, 5, 3, 4]
        return h.array(
            { elementsCount: 5 },
            h.ptr(getMoveInfosCategoryType()),
        );
    }

    function getMoveInfosCategoryType() {

        const bytesPerCommand = {
            [0x00_99]: 16, // 13-16 bytes
            [0x00_a3]: 8,
            [0x00_b2]: 8, // 8-24 bytes
            [0x00_c4]: 8,
            [0x00_c6]: 8,
            [0x00_ae]: 24,
            [0x01_2b]: 1, // 1-16 bytes
            [0x01_53]: 8, // 2 floats
            [0x01_54]: 8, // 2 floats
            [0x01_55]: 8, // 2 floats + maybe 16 more bytes
            [0x01_56]: 8,
            [0x01_57]: 12, // 4 bytes idk, float, 4 bytes idk, + maybe 5*4 more bytes
            [0x01_63]: 8,
            [0x01_99]: 8,
            // from BASE.bin
            [0x00_c3]: 1, // 1-24 bytes
            [0x01_30]: 8,
            [0x01_32]: 8, // 8-28 bytes
            [0x01_3f]: 8,
            [0x01_43]: 16, // 16-28 bytes
            [0x00_bb]: 8, // 8-16 bytes
            // other:
            // 0xc8: not a pointer but has payload
        };

        return h.array(
            { elementsUntil: ["FF FF FF FF 00 00 00 00 FF FF FF 00"] },
            h.struct([
                // for stuns it's mostly "BF 5D" which means nothing special?
                ["moveIdToPlayNext", h.uint(2)],
                ["moveType", h.uint(1, [
                    0x00, // movement/block (or just "nothing"?),
                    0x01, // legacy jump(7),
                    0x02, // jump strike? (but what do rig tlc p and tlc 2k do there?),
                    0x03, // strike
                    0x04, // throw break (also combo throws/holds? also Rig's _juggle_ BND 6H+KK on hit)
                    0x05, // hold
                    0x06, // inside combo throw/hold?
                    0x07, // ???
                    0x08, // stun
                    0x09, // ???
                    0x0A, // ???
                    0x0B, // ???
                    0x0C, // ???
                    0x0D, // "other" (e.g. sidestep, taunt, charge start, tlc, tag out, bt 44, Rig's pp4, bnd h, KKK4, auto-transition post 4kk and bnd 2kk, 3k6k4)
                    0x0E, // ground attack
                    0x0F, // ??? found in BASE.bin
                    0x10, // throw / OH
                ])],
                // based on moveType:
                // for 0x2 and 0x3 (also 0x1? 0x7? 0xD?), this is used to calc offset in hit table
                // for 0x04 (or 0xA? or 0x10? or all?) index in pThrowInfos?
                // for 0x5 (or 0x6? 0r 0xB? or all?), index in pHoldInfos?
                // for 0xE, index in pGroundHitTable?
                ["secondId", h.uint(1)],
                ["pPtr",    h.ptr(getMoveInfosCategoryPtrType())],
                ["animId",  h.uint(2)],
                ["unknown", h.uint(1)],
                ["zero1",   h.zero(1)],
            ]),
            // FIXME: only don't report for pCategory5
            { dontReportEmpty: true },
        );

        function getMoveInfosCategoryPtrType() {
            return h.array(
                { elementsUntil: ["FF FF FF FF FF FF FF FF"] },
                h.struct([
                    // TODO: validate for known commands
                    ["command", h.uint(4)],
                    [
                        "pPayload",
                        h.switch(
                            (parent: any) => Boolean(
                                bytesPerCommand[parent.v.command.v.dehexUint],
                            ) ? 0 : 1,
                            h.ptr((parent: any) => h.blob({
                                size: bytesPerCommand[parent.v.command.v.dehexUint],
                            })),
                            h.uint(4),
                        ),
                    ],
                ]),
                { dontReportEmpty: true },
            );
        }
    }

    //

    function getCharacterOverridesType() {

        const { switchOptions, addSwitchOption } = (function(){
            const switchOptions = new Array<TypeH<Array<unknown>, unknown>>();
            return { switchOptions, addSwitchOption };
            function addSwitchOption<T extends TypeH<any, any>>(option: T): T {
                switchOptions.push(option);
                return option;
            }
        }());

        //

        const anUnknown = addSwitchOption(
            h.blob({ size: 4 }),
        );

        const animIdOrMoveIdType = h.struct([
            ["unknown1", h.uint(2)],
            ["zero",     h.zero(2)],
        ]);

        const aFloat         = addSwitchOption(h.float());
        const aNum           = addSwitchOption(h.uint(4));
        const moveIdOrAnimId = addSwitchOption(animIdOrMoveIdType);

        const ptrTo4MoveIdsOrAnimIds = addSwitchOption(
            h.ptr(h.array({ elementsCount: 4 }, animIdOrMoveIdType)),
        );

        const ptrToTwoNums = addSwitchOption(
            h.ptr(h.array({ elementsCount: 2 }, h.uint(4))),
        );

        const ptrTo2Floats = addSwitchOption(
            h.ptr(h.array({ elementsCount: 2 }, h.float())),
        );

        const ptrTo3Floats = addSwitchOption(
            h.ptr(h.array({ elementsCount: 3 }, h.float())),
        );

        const ptrTo3FloatsAndTail = addSwitchOption(
            h.ptr(
                h.struct([
                    ["floats", h.array({ elementsCount: 3 }, h.float())],
                    // possibly just alignment and is not an actual part of this struct
                    ["tail", h.array({ elementsCount: 2 }, h.zero(4))],
                ]),
            ),
        );

        const ptrTo3NumsAnd2Floats = addSwitchOption(
            h.ptr(
                h.struct([
                    ["nums",   h.array({ elementsCount: 3 }, h.uint(4))],
                    ["floats", h.array({ elementsCount: 2 }, h.float())],
                ]),
            ),
        );

        const ptrTo2FloatsAndNum = addSwitchOption(
            h.ptr(
                h.struct([
                    ["floats", h.array({ elementsCount: 2 }, h.float())],
                    ["num",    h.uint(4)],
                ]),
            ),
        );

        // Possibly duplicate of ptrTo2FloatsAndNum
        const ptrToFloatZeroAndNum = addSwitchOption(
            h.ptr(
                h.struct([
                    ["theFloat", h.float()],
                    ["zero",     h.zero(4)],
                    ["num",      h.uint(4)],
                ]),
            ),
        );

        const gender = addSwitchOption(
            h.struct([
                ["isFemale", h.uint(4, [0, 1])],
            ]),
        );

        // 00 = [feather..welter]; 01 = [middle..heavy]; 02 = super heavy
        // although mila, kokoro, hitomi, momiji, mai don't match their momentum multiplier (as of 1.10c)
        const weightClass = addSwitchOption(
            h.struct([
                ["weightClass", h.uint(4, [0, 1, 2])],
            ]),
        );

        const ptrToSomeStructWithAFloat1 = addSwitchOption(
            h.ptr(
                h.struct([
                    ["unknown1", h.blob({ size: 4 })],
                    ["unknown2", h.blob({ size: 4 })],
                    ["unknown3", h.blob({ size: 4 })],
                    ["unknownFloat", h.float()],
                    ["zero", h.zero(4)],
                ]),
            ),
        );

        const ptrToSomeStructWithAFloat2 = addSwitchOption(
            h.ptr(
                h.struct([
                    ["unknown1", h.blob({ size: 4 })],
                    ["unknown2", h.blob({ size: 4 })],
                    ["unknownFloat", h.float()],
                    ["zero1", h.zero(4)],
                    ["zero2", h.zero(4)],
                ]),
            ),
        );

        return h.array(
            { elementsUntil: ["FF FF FF FF 00 00 00 00"] },
            h.struct([
                ["payloadMeaning", h.uint(2)],
                ["zero", h.zero(2)],
                ["payload", h.switch(
                    (parent: any) => Math.max(0, switchOptions.indexOf({

                        // Pattern: Every char got exactly 1 instance of the following:

                        // "9A 01": "51 01 00 00" // same for everyone
                        // "9B 01": "A2 3E 00 00" // same for everyone
                        // "9C 01": h.struct(h.uint(1), h.uint(1, [0x20, 0x21, 0x1F]), h.zero(2))
                        // "9D 01": h.struct(h.uint(1), h.uint(1, [0x7D]), h.zero(2))

                        "DF 00": gender,
                        "E0 00": weightClass,

                        // momentum multiplier (always at index 2?)
                        "E1 00": aFloat,
                        // starting launch height multiplier (always at index 3?)
                        // aka "char's height" multiplier
                        // also applies to e.g. 66p just before the wallbounce but not wallsplat
                        "E2 00": aFloat,
                        //
                        "E3 00": aFloat, // ???, everyone got "66 66 A6 3F"=1.3
                        "E4 00": aFloat, // ???, everyone got "00 00 00 40"=2.0
                        "E5 00": aFloat, // ???, everyone got "6F 12 03 3C"=0.008 except hayate's "BC 74 13 3C"=0.009
                        "E6 00": aFloat, // ???, everyone got "00 00 00 00"=0.0
                        // "E7 00": h.struct(h.uint(2), h.zero(2)); // alpha got FF FF
                        // "E8 00": h.struct(h.uint(2), h.zero(2)); // alpha got FF FF
                        // "EB 00": h.struct(h.uint(2), h.zero(2)); // move id for "standing throw" com (re)action
                        // "EC 00": h.struct(h.uint(2), h.zero(2)); // move id for "croucing throw" com (re)action
                        //
                        "75 01": ptrToSomeStructWithAFloat1, // for rig, this is at index 19; everyone got this exactly once
                        "77 01": ptrToSomeStructWithAFloat2, // for rig, this is at index 20; everyone got this exactly once

                        // Pattern: Every char got at least 2 and up to 15 instances of this:

                        "73 01": ptrToSomeStructWithAFloat1, // for rig, this is at indices 16..18

                        // Pattern: Everyone got at most 1, but maybe 0

                        // "E9 00": h.struct(h.uint(2), h.zero(2)) // alpha and pai got "FF FF"
                        // "EA 00": h.struct(h.uint(2), h.zero(2)) // alpha and pai got "FF FF"
                        // "EF 00": h.struct(h.uint(2), h.zero(2)) // mostly "00 00"; pai has "FF FF"; bayman, jann lee, tina, bass, leifang and leon have "?? 1F"
                        // "F1 00": h.struct(h.uint(2), h.zero(2)) // alpha, eliot and lisa got "00 00", pai got "FF FF", rest got either "?? 20" or "?? 1F"
                        // "9E 01": "40 9C 00 00" for everyone who has it
                        // "ED 00": h.struct(h.uint(2), h.zero(2)) // akira, sarah, pai and jacky got "FF FF", rest got either "?? 1F" or "?? 20"

                        // "7F 01": h.uint(4, [0xE9, 0xEA, 0xEB, 0xEC, 0xED])
                        //   "E9": alpha, mil, rig, eliot, sarah, pai
                        //   "EA": bass, lf
                        //   "EB": brad, kokoro, bayman, zack, hayabusa, tengu, lisa, hitomi, raidou, momiji, gen fu, leon
                        //   "EC": jl, ayane, mr
                        //   "ED": kasumi, helena, christie, tina, p4, hayate, ein, rachel, honoka

                        // "EE 00": h.struct(h.uint(2), h.zero(2)) // akira, sarah, pai and jacky got "FF FF", rest got either "?? 1F" or "?? 20"
                        // "F0 00": h.struct(h.uint(2), h.zero(2)) // akira, sarah, pai and jacky got "FF FF", rest got either "?? 1F" or "?? 20"

                        // "88 01": float // mila = "00 00 00 40"; helena, christie, ein = "00 00 00 3F";  rig, jl, zack, bass = "00 00 C0 3F"

                        // "5D 01": h.uint(4, ["10 21", "F6 20"]); bayman = "10 21"; leon = "F6 20"

                        // Pattern: no specific pattern

                        // "8E 01": ptr? // can any times per char, including 0
                        // "74 01": ptr? // can any times per char, including 0
                        // "76 01": ptr? // can any times per char, including 0
                        // "78 01": ptr? // can any times per char, including 0

                        // "7D 01": ptr? // not everyone got it, but who got have it between 7 and 8 times

                        // From BASE.bin:

                        "F4 00": aFloat,
                        "F7 00": aFloat,
                        "64 01": aFloat,
                        "65 01": aFloat,
                        "66 01": aFloat,
                        "AF 01": aFloat,
                        "B0 01": aFloat,
                        "B3 01": aFloat,
                        "C5 01": aFloat,
                        "C6 01": aFloat,

                        "F2 00": aNum,
                        "F3 00": aNum,
                        "F5 00": aNum,
                        "F6 00": aNum,
                        "F8 00": aNum,
                        "F9 00": aNum,
                        "FA 00": aNum,
                        "5E 01": aNum,
                        "68 01": aNum,
                        "69 01": aNum,
                        "6A 01": aNum,
                        "9F 01": moveIdOrAnimId,
                        "B6 01": moveIdOrAnimId,
                        "B7 01": moveIdOrAnimId,
                        "BC 01": moveIdOrAnimId,
                        "C1 01": moveIdOrAnimId,
                        "C7 01": moveIdOrAnimId,
                        "C8 01": moveIdOrAnimId,

                        "5B 01": ptrTo4MoveIdsOrAnimIds,

                        "5F 01": ptrToTwoNums,
                        "60 01": ptrToTwoNums,
                        "61 01": ptrToTwoNums,
                        "62 01": ptrToTwoNums,
                        "6B 01": ptrToTwoNums,

                        "67 01": ptrTo2Floats,
                        "7B 01": ptrTo3NumsAnd2Floats, // can any times per char, including 0
                        "7C 01": ptrTo3NumsAnd2Floats, // can any times per char, including 0
                        "B8 01": ptrTo2FloatsAndNum,
                        "B9 01": ptrToFloatZeroAndNum,
                        "BB 01": ptrTo3Floats,
                        "BA 01": ptrTo3FloatsAndTail,

                    }[parent.v.payloadMeaning.v])),
                    switchOptions[0], switchOptions[1], ...switchOptions.slice(2),
                )],
            ]),
        );
    }

    //

    // TODO: validate that this has same length as pAnimsOrder
    //       anim ids from move info get mapped through pAnimsOrder to here
    function getTimelinesType() {
        return h.array(
            { elementsUntil: ["00 00 00 00"] },
            h.ptr(
                // momiji: 
                // 00000000010002000A000100350346002301 = standing
                // 00000100010002000A0010000700 = crouching
                // 00001400010002000A0001000C0051000600010010006C00010030005100060001005000510006000100510046001000 = walk forward
                // 00001500010002000A000700 = walk back in block (slowly)
                // 00001E00010002000A000700 = walk forward (slowly)
                h.blob({
                    elementsUntil: [
                        "FF FF",
                        // "0F 00", // FIXME: include in data?
                    ],
                }),
                // h.uint(2) // 00, 0x1E, 0x69
                // when word before is 0:
                //   h.uint(2) // anim id?
                //   h.uint(2) 
                // when word before is 0x1E or 0x69:
                //   h.blob({ size: 2 })
                //   h.uint(2)
                //   h.uint(2)

                // Rig 8P:
                //
                //       +++++------------------------------------ animation id (again)
                //       |||||
                //       VVVVV
                // 00 00[06 04]01 00 02 00 0A 00 22 00 61 00 2D 00
                // 5B 00 01 00[0C]00 35 00 04 00 01 00[0E]00-03-00 reducing this allows to lower active frame start further (to new limit 0xC); is this when to que sound and which
                // 17 30 03 00 5D 00 A4 00 16 00 01 00[10]00 21 00
                // 02 00 1A 00 01 00[13]00 05 00 1B 00 ^^
                //             ^^    ^^                ||
                //             ||    ||                ++--------- from which frame active frame starts (doesn't have effect for values lower than = 0xE)
                //             ||    ||
                //             ||    ----------------------------- from which frame recovery starts
                //             ||                                  works normally up to move's duration
                //             ||                                  after that it doesn't prevent from doing other stuff but idle animation and advantage counters are broken for some time
                //             ++-- reducing this allows to lower active frame further
            ),
        );
    }

    //

    function getCommandListTypes() {
        const size = 15;
        const commandListPtrType = getCommandListPtrType();
        const pCommandListPtrsType = h.ptr(
            outerParent => h.array(
                { elementsCount: size },
                h.ptr(
                    (innerParent: unknown, varPath: VarPath) => {
                        // FIXME
                        const index = Number(varPath[varPath.length - 2].match(/\d+/)[0]);
                        // WARNING: breaking "natural" order of dereferencing here
                        const elementsCount = (
                            outerParent.v.pCommandListSizes.dereference(outerParent).v.sizes.v[index].v.dehexUint
                        );
                        return h.array(
                            { elementsCount },
                            commandListPtrType,
                            { dontReportEmpty: true },
                        );
                    },
                    { dontReportNullPtr: true }
                ),
            ),
        );
        const pCommandListSizesType = h.ptr(
            h.struct([
                ["sizes", h.array({ elementsCount: size }, h.uint(1))],
                ["zeros", h.array({ elementsCount: 21 }, h.zero(1))],
            ]),
        );
        // TODO: cross-validate that size 0 === nullptr in both directions
        return {
            pCommandListPtrsType,
            pCommandListSizesType,
        };
    }

    function getCommandListPtrType() {

        // Somehow related to "fight screen info / move list"

        // For rig, only pairs are these:
        // bnd kkk4
        // 4kk and alike
        // 1kk and alike
        // bnd t + bnd t reaction
        // sidestep up p + sidestep down p
        // sidestep up k + sidestep down k
        // 33h+k / no meter + 33h+k / meter
        // And then more for pUnknown9?
        const matchingMoveIdsType = h.array(
            {
                elementsUntil: ["FF FF 00 00"],
                direction: -1,
            },
            h.struct([
                ["moveId", h.uint(2)],
                ["zero",   h.zero(2)],
            ]),
        );

        return h.struct([
            ["pInputStr", h.ptr(h.zString())],
            ["unknown1", h.uint(1)], ["zero1", h.zero(1)], ["zero2", h.zero(2)],
            ["pMatchingMoveIds",  h.ptr(matchingMoveIdsType)],
            // what com does in combo training
            // 00 = nothing special
            // 01 = nothing, but you're supposed to be BT?
            // 02 = nothing, but you're supposed to be grounded / waking up? (used for WUKs)
            // 04 = BT
            // 0A = fall onto ground
            // 0B = high p
            // 0C = high k
            // 0D = mid p
            // 0E = mid k
            // 0F = low P
            // 10 = low k
            // 13 = nothing, but supposed to do jumping punch?
            // 14 = nothing, but supposed to do jumping kick?
            // 15 = crouch
            // 26 = BT crouch
            // 46 = nothing, but you're supposed to be jumping over a fence?
            ["situation", h.uint(1)],                 ["zero3", h.zero(1)], ["zero4", h.zero(2)],
            ["magic", h.uint(4, [0xFF_FF_FF_FF])],    ["zero5", h.zero(4)], ["zero6", h.zero(4)],
            ["displayInMovelist", h.uint(1, [0, 1])], ["zero7", h.zero(1)], ["zero8", h.zero(2)],
            ["pHeightsStr", h.ptr(h.zString(), { dontReportNullPtr: true })],

            ["demoComboIndex", h.uint(2)],
            [
                "label",
                h.uint(2, [
                    0x00_01, // everything else?
                    0x00_02, // ??? used for throws
                    0x00_03, // ??? used for holds and taunts
                    0x00_04, // Offensive hold
                    0x00_05, // "SP", special? Meaning move ends in some stance
                    0x00_06, // Critical burst
                    0x00_07, // Power blow
                    0x00_08, // Power launcher
                ]),
            ],
            [
                // On which page to show this move?..
                "unknownMask",
                h.uint(2, [
                    0xFF_FF, // don't show?
                    0x00_00, // throws from jumping over fence?..
                    0x00_08, // "default" / main?
                    0x00_10, // throws?
                    0x00_20, // holds?
                    0x00_40, // BND?
                    0x00_80, // ground attacks?
                    0x01_00, // taunts & "other"? (entering stances)
                    0x02_00, // bt?
                ]),
            ],
            ["unknown5", h.uint(2, [0x00_00, 0xFF_FF])],
            [
                "unknown6",
                h.array(
                    { elementsCount: 3 },
                    h.struct([
                        ["unknown", h.uint(1)],
                        ["zero",    h.zero(1)],
                    ]),
                ),
            ],
            ["unknown7",    h.uint(2, [0x00_00, 0x00_1C])],
            ["zero10",      h.zero(4)],
            ["unknownBool", h.uint(1, [0, 1])],
            ["completed",   h.uint(1, [0])], // game might set this 1 in runtime
            ["unknown8",    h.blob({ size: 2 })],
            ["pUnknown9",   h.ptr(matchingMoveIdsType, { dontReportNullPtr: true })],
            ["unknown10",   h.blob({ size: 4 })],
        ]);
    }
}



// helpers



function getCharName(fileName: string) {
    return fileName.split("_")[1];
}

function getFileType(fileUint8Array: Uint8Array) {
    if (hasMagicAt(fileUint8Array, 0, magics.baseBinStart)) return "baseBin";
    if (hasMagicAt(fileUint8Array, 0, magics.charBinStart)) return "charBin";
    if (hasMagicAt(fileUint8Array, 0, magics.motionStart))  return "motion";
    throw new Error("Unknown file type");
}

function hasMagicAt(fileUint8Array: Uint8Array, pos: number, magic: AobStr) {
    const actualPos = pos < 0 ? fileUint8Array.length - Math.abs(pos) : pos;
    console.assert(
        actualPos >= 0 &&
        actualPos + magic.aobLength <= fileUint8Array.length,
    );
    return (
        magic ===
        fileUint8Array.subarray(actualPos, actualPos + magic.aobLength).asAobStr
    );
}

function findRange(stuff: Array<ParentValue>) {
    if (stuff.length === 0) return null;
    let min = Infinity;
    let max = -Infinity;
    for (const entry of stuff) {
        console.assert(entry.rawU8A.length > 0);
        min = Math.min(min, entry.posStart.dehexUint);
        max = Math.max(max, entry.posStart.dehexUint + entry.rawU8A.length);
    }
    return { min, max };
}



// Exposed tools



function compareMems(
    bins: Record<string, CharBin>,
    getPtr, // e.g. charBin => charBin.header.v.pIdk9.d.posStart,
    bytes = 256,
    width = 16,
) {
    const result = Object.values(bins).filter(
        (charBin: CharBin) => !charBin.isBaseBin
    ).map((charBin: CharBin) => {
        const charName = charBin.charName;
        const ptr = getPtr(charBin).dehexUint;
        const chunk = charBin.fileUint8Array.subarray(ptr, ptr + bytes);
        return {
            charName,
            ptr,
            memView: Array.from(chunk).addDimension(width).map(e => e.asAobStr),
            logMemView,
        };
        function logMemView() {
            const getHit = charBin.fileUsageHelper.createGetHit();
            console.log(
                `${charName}`,
                { whatIsAt: (pos: number) => charBin.fileUsageHelper.createGetHit()(pos) },
            );
            chunk.logPrettyAob(width, ptr, getBgColorAt);
            function getBgColorAt(pos: number) {
                const actualPos = Math.round(pos);
                const hit = getHit(actualPos);
                if (hit) {
                    const hitFrom = hit[0].dehexUint;
                    const hitTo   = hit[1].dehexUint;
                    if (hitFrom === hitTo && pos < actualPos && hitFrom === actualPos) {
                        return "#700";
                    }
                    if (pos === actualPos && hitTo > hitFrom) return "#000";
                    if (hitTo >= pos + 1 && hitFrom < pos) return "#000";
                }
                return undefined;
            }
        };
    });
    return {
        result,
        get logMemView() {
            for (const { logMemView } of result) { logMemView(); }
            return "done";
        }
    };
}

function collapse(something) {
    if (!something.rawU8A) return something;
    const v = something.p ? something.d?.v : something.v;
    if (Array.isArray(v)) {
        return v.map(e => collapse(e));
    } else
    if (v && (v instanceof Uint8Array)) {
        return v.asAobStr;
    } else
    if (v && typeof v === "object") {
        const result = {};
        Object.entries(v).forEach(([key, value]) => {
            result[key] = collapse(value);
        });
        return result;
    } else {
        return v;
    }
}

type CharName = string;
type CharBin = Record<CharName, any>; // FIXME - this is what parseBin returns

function findMoveIdInCommandList(charBin: CharBin, moveId: NumberAsAobStr) {
    const results = [];
    const array = charBin.header.v.pCommandListPtrs.d.v;
    for (let i = 0; i < array.length; i += 1) {
        const v = array[i];
        if (!v.d) continue;
        for (let j = 0; j < v.d.v.length; j += 1) {
            const v2 = v.d.v[j];
            for (let k = 0; k < v2.v.pMatchingMoveIds.d?.v.length ?? 0; k += 1) {
                const v3 = v2.v.pMatchingMoveIds.d.v[k];
                if (v3.v.moveId.v.dehexUint === moveId.dehexUint) {
                    results.push({
                        moveId,
                        match: { i, j, k, arrayIJ: v2.v },
                    });
                    // category: i
                    // inputStr:   charBin.header.v.pCommandListPtrs.d.v[i].d.v[j].v.pInputStr.d.v,
                    // heightsStr: charBin.header.v.pCommandListPtrs.d.v[i].d.v[j].v.pHeightsStr.d?.v,
                    // match:      charBin.header.v.pCommandListPtrs.d.v[i].d.v[j].v.pMatchingMoveIds.d.v[k],
                }
            }
        }
    }
    return results;
}

function moveIdFindResultToString(findResult, optDb?) {
    const { i, j, k, arrayIJ } = findResult.match;
    const category = i;
    const inputStr   = arrayIJ.pInputStr.d.v;
    const heightsStr = arrayIJ.pHeightsStr.d?.v ?? "?";
    const sharedWith = arrayIJ.pMatchingMoveIds.d?.v.filter((e, i) => i !== k) || [];

    const matchesForThisMoveId = optDb?.filter(e => e.moveId === findResult.moveId).length ?? 1;

    const resultParts = [
        findResult.moveId,
        " ",
        (
            matchesForThisMoveId > 1
                ? `(+${matchesForThisMoveId - 1})`
                : "    "
        ),
        " = ",
        "[" + [
            String(category).padStart(2, "0"),
            String(j).padStart(3, "0"),
            k,
        ].join("|") + "]",
        " ",
        inputStr.padStart(10, " "),
        " :: ",
        heightsStr.padStart(5, " "),
    ];
    if (sharedWith.length > 0) {
        resultParts.push(...[
            " // ",
            sharedWith.map(e => e.v.moveId.v).join(", "),
        ]);
    }
    return resultParts.join("");
}

function findMoveIdsFromInput(charBin: CharBin, inputPattern: string) {
    const doesInputSatisfyPattern = createInputComparator(inputPattern);
    return getAllMoveIdsFromMoveInfos(charBin).flatMap(
        moveId => findMoveIdInCommandList(charBin, moveId),
    ).filter(
        e => doesInputSatisfyPattern(e.match.arrayIJ.pInputStr.d.v),
    ).map(e => moveIdFindResultToString(e));
}

// potentially doesn't include stuff like move ids from hit tabls (stun reaction)
// or auto-transition move ids
function getAllMoveIdsFromMoveInfos(charBin: CharBin): Array<NumberAsAobStr> {
    if (charBin.isBaseBin) {
        return charBin.header.v.pMoveInfos.d.v.map((moveInfo, i) => {
            return getMoveId(getBaseBinMoveIdCategory(), i);
        });
    }
    return charBin.header.v.pMoveInfosArray.d.v.map((v, catI) => {
        return v.d.v.map((moveInfo, i) => {
            return getMoveId(catI , i);
        });
    }).flatten();
}

function getAllMoveIdsFromMoveInputs(
    charBin: CharBin,
    excludeUnlisted: boolean = false,
) {
    return getAllMoveInputs(charBin, excludeUnlisted).map(
        e => e.moveId,
    ).filter(Boolean).sortAscending(e => e.dehexUint);
}

function getAllMoveIdsFromHitTables(
    charBin: CharBin,
    excludeUnused: boolean = false,
    excludeLegacy: boolean = false,
    excludeKnown:  boolean = false,
): Array<NumberAsAobStr> {
    const result = getAllHitTables(charBin, excludeUnused).flatMap(e => {
        return [
            e.value.v.nh,
            ...(excludeLegacy ? [] : [e.value.v.legacyBtNh]),
            e.value.v.block,
            e.value.v.ch,
            e.value.v.btCh,
            e.value.v.hch,
            e.value.v.btHch,
            e.value.v.crouchNh,
            ...(excludeLegacy ? [] : [e.value.v.legacyCrouchBtNh]),
            e.value.v.crouchBlock,
            e.value.v.crouchCh,
            e.value.v.crouchBtCh,
            e.value.v.crouchHch,
            e.value.v.crouchBackHch,
            e.value.v.juggle,
            e.value.v.juggleBt,
            e.value.v.groundHitG86,
            e.value.v.groundHitG8R,
            e.value.v.groundHitG24,
            e.value.v.groundHitG2R,
            e.value.v.moveIdOnHit,
        ].map(e => e.v).filter(
            e => !["FF FF", "00 00"].includes(e),
        ).filterUnique();
    }).filterUnique().sortAscending(e => e.dehexUint);
    if (excludeKnown) {
        const moveIdsFromMoveInfos = getAllMoveIdsFromMoveInfos(charBin).map(e => e.dehexUint);
        return result.filter(
            e => !moveIdsFromMoveInfos.includes(e.dehexUint),
        );
    }
    return result;
}

// TODO: because in-game command list is not the source of truth and contains bugs,
//       add a validation that points these bugs out
//       e.g. compare height of last attack for same move id (note: there are heights like "4" which mean 1+2, e.g. Rig's BND 6H+K)
//            or check that all lists in pMatchingMoveIds have no intersections
//       E.g. Rig's 85 1F (tlc k) is used again by mistake where F8 1F (tlc 6k) should be
//            Same for Rig's 86 1F (tlc kk)
function dumpAllMoves(charBin: CharBin) {

    const allMoveIds = getAllMoveIdsFromMoveInfos(charBin);

    const result = allMoveIds.flatMap(
        moveId => findMoveIdInCommandList(charBin, moveId),
    );

    return {
        allMoveIds,

        moveIdsNotInCommandList: allMoveIds.filter(moveId => {
            return !result.some(r => r.moveId.dehexUint === moveId.dehexUint);
        }),

        inCommandListByCommandListCategory: result.groupBy(
            e => e.match.i,
        ).sortAscending(e => e.value).map(e => groupByMoveId(e)),

        inCommandListByMoveIdCategory: result.groupBy(
            e => getMoveCategoryAndIndex(e.moveId).category,
        ).sortAscending(e => e.value).map(e => groupByMoveId(e)),
    };

    function groupByMoveId(e) {
        return e.matches.groupBy(e2 => e2.moveId).sortAscending(
            e => e.value.dehexUint,
        ).map(e => e.matches.map(m => moveIdFindResultToString(m, result)));
    }
}

function getMoveInfo(charBin: CharBin, moveId: NumberAsAobStr) {
    const { category: moveCategory, index } = getMoveCategoryAndIndex(moveId);
    if (charBin.isBaseBin) {
        if (moveCategory !== getBaseBinMoveIdCategory()) {
            throw new Error("Unexpected move category for base bin");
        }
        return charBin.header.v.pMoveInfos.d.v[index];
    }
    return charBin.header.v.pMoveInfosArray.d.v[moveCategory]?.d.v[index];
}

function getAnimationInfo(charBin: CharBin, moveId: NumberAsAobStr) {
    const animationId = getMoveInfo(charBin, moveId).v.animId.v;
    const index = charBin.header.v.pAnimsOrder.d.v.map(v => v.v.dehexUint).indexOf(animationId.dehexUint);
    if (index >= 0) {
        return charBin.header.v.pTimelines.d.v[index].d;
    }
    return null;
}

function reportTagThrows(charBin: CharBin, includeUnlisted = false) {
    const moveIdsToIgnore = [
        "0D 01", // tag 8S
        "2C 01", // sidestep up
        "2D 01", // sidestep down
    ].map(str => str.dehexUint);
    const result = getAllMoveInputs(charBin, !includeUnlisted).flatMap(
        e => e.inputs.map(e => e.raw),
    ).flatMap(e => {
        const aobStr = e.v.asAobStr;
        const parsed = InputParser.readInput(aobStr).result;
        if (parsed.error) return [];
        return [{
            aobStr,
            moveId: InputParser.getResultingMoveId(aobStr),
            parsed,
        }];
    }).filter((e, i, a) => {
        return (
            // Apply blacklist
            !moveIdsToIgnore.includes(e.moveId.dehexUint) &&
            // Only inlcude moves that have S input
            InputParser.mentionsButton(e.aobStr, "S") &&
            // Exclude moves that have alternate inputs that ...
            !a.filter(e2 => e2 !== e && e2.moveId === e.moveId).some(e2 => (
                // ... alternate input uses taunt button
                InputParser.mentionsButton(e2.aobStr, "Ap") ||
                // ... alternate input doesn't use S button
                !InputParser.mentionsButton(e2.aobStr, "S")
            ))
            // TODO: check move info to confirm it's a throw?
        );
    }).sortAscending(e => e.moveId.dehexUint).map(e => (
        InputParser.parsedDataToString(
            e.parsed.value,
        ).simplified +
        `   =   move '${e.moveId}'`
    )).filterUnique();
    return result;
}

function analyzeHitTables(charBin: CharBin) {
    const enrichedHitTables = getAllHitTables(charBin).map(e => ({
        _move2ndId: e.move2ndId,
        ...collapse(e.value),
    }));
    return {
        groupedForEachKey: tools.groupForEachKey(
            enrichedHitTables,
            ["_move2ndId"],
        ),
        groupedByIdks: enrichedHitTables.groupByMultiple(
            e => [
                [ 0, "hitTableIdk1",   e.hitTableIdk1   ].join(" : "),
                [ 1, "hitTableIdk2",   e.hitTableIdk2   ].join(" : "),
                [ 2, "hitTableIdk3",   e.hitTableIdk3   ].join(" : "),
                [ 3, "hitTableMagic1", e.hitTableMagic1 ].join(" : "),
                [ 4, "hitTableIdk5",   e.hitTableIdk5   ].join(" : "),
                [ 5, "hitTableMagic2", e.hitTableMagic2 ].join(" : "),
            ],
        ).sortAscending(e => (e as any).value.split(" : ")[0]),
    };
}

function getAllMoveInputs(
    charBin: CharBin,
    excludeCharBinUnlisted: boolean,
    baseBin?: CharBin,
    excludeBaseBinUnlisted: boolean = false,
) {
    const sourceBase = "base";
    const sourceChar = "char";
    const iUnlisted = -1;
    const flat = [];
    if (baseBin) {
        flat.push(
            ...baseBin.header.v.pArrayOfPtrsToInputCommands.d.v.flatMap(
                (pMoveInputPtrs, i) => pMoveInputPtrs.d.v.map(
                    (pMoveInput, j) => ({ moveInput: pMoveInput.d, source: sourceBase, i, j }),
                ),
            ),
        );
    }
    flat.push(
        ...charBin.header.v.pArrayOfPtrsToInputCommands.d.v.flatMap(
            (pMoveInputPtrs, i) => pMoveInputPtrs.d.v.map(
                (pMoveInput, j) => ({ moveInput: pMoveInput.d, source: sourceChar, i, j }),
            ),
        ),
    );
    if (baseBin && !excludeBaseBinUnlisted) {
        flat.push(
            ...baseBin.unlistedMoveInputs.map(
                (moveInput, j) => ({ moveInput, source: sourceBase, i: iUnlisted, j }),
            ),
        );
    }
    if (!excludeCharBinUnlisted) {
        flat.push(
            ...charBin.unlistedMoveInputs.map(
                (moveInput, j) => ({ moveInput, source: sourceChar, i: iUnlisted, j }),
            )
        );
    }
    const grouped = flat.groupBy(e => e.source + " " + e.moveInput.posStart);
    grouped.forEach(e => {
        e.matches.forEach((e, i, a) => {
            console.assert(
                e.moveInput.rawU8A.asAobStr === a[0].moveInput.rawU8A.asAobStr,
            );
        });
    });
    return grouped.flatMap(e => {
        const raw = e.matches[0].moveInput;
        const parseResult = InputParser.readInput(raw.rawU8A.asAobStr);
        if (parseResult.result.error) {
            return [];
        }
        return [{
            raw,
            parsedInput: parseResult.result.value,
            sections: e.matches.map(e => `${e.source}|${e.i}|${e.j}`),
        }];
    }).groupBy(e => InputParser.getResultingMoveId(e.raw.rawU8A.asAobStr)).map(e => {
        return {
            moveId: e.value,
            inputs: e.matches,
        };
    });
}

function getAllHitTables(charBin: CharBin, excludeUnused: boolean = false) {
    return [
        ...charBin.hitTableEntries,
        ...(excludeUnused ? [] : charBin.unusedHitTableEntries),
    ].filterUnique(
        e => e.posStart,
        e => e.rawU8A.asAob2Str,
    ).sortAscending(e => e.posStart.dehexUint).map(e => {
        const move2ndId = (
            (e.posStart.dehexUint - charBin.header.v.pHitTable.v.dehexUint) / 0x74
        );
        console.assert(
            move2ndId >= 0 &&
            move2ndId < 255 &&
            (move2ndId % 1) === 0
        );
        return {
            move2ndId,
            value: e,
        };
    });
}

function buildCharacter(
    baseBin: CharBin,
    charBin: CharBin,
    handmadeDescriptions?: {
        // e.g. `{ "AC 00": "neutral T break", }` where "AC 00" is move id
        moveIdBase?: Record<NumberAsAobStr, string>,
        // e.g. `{ "77 1F": "236k / 6(6)~k", }` where "77 1F" is move id
        moveIdCharacter?: Record<NumberAsAobStr, string>,
        // e.g. { "05": "BND", } where "05" is byte from input command
        stanceCharacter?: Record<NumberAsAobStr, string>,
        // e.g. { "9F 01": "receiving t" }, where "9F 01" is anim id
        animIdCharacter?: Record<NumberAsAobStr, string>,
    },
) {
    const placeholder = null;

    const inputs = getAllMoveInputs(charBin, false, baseBin, false).map(e => ({
        ...e,
        // To be filled out later
        description: placeholder,
        inputs: e.inputs.map(e => ({
            ...e,
            // To be filled out later
            parsedStrings: placeholder,
        })),
        children: [],
        parents: [],
    }));

    inputs.forEach(outerE => {
        outerE.inputs.forEach(inputsE => {
            inputsE.parsedInput.forEach(e => {
                // TODO: make this more robust
                if (InputParser.parseCommand(e)?.prefix?.[0] === "during") {
                    const parentMoveId = e.args;
                    outerE.parents.addUnique(parentMoveId);
                    const parent = inputs.find(e => e.moveId === parentMoveId);
                    parent?.children.addUnique(outerE.moveId);
                }
            });
        });
    });

    const missingMoveIdsInInputs = [];
    const circles = [];

    tools.createWalkOrder(
        inputs,
        function* getParents(e) {
            for (const parentMoveId of e.parents) {
                const match = inputs.find(e2 => e2.moveId === parentMoveId);
                if (match) {
                    yield match;
                } else {
                    missingMoveIdsInInputs.push(parentMoveId);
                }
            }
        },
        circles,
    ).forEach(e => {
        e.inputs.forEach(e => {
            e.parsedStrings = InputParser.parsedDataToString(
                e.parsedInput,
                getStanceName, getMoveName,
            );
        });
        e.description = getMoveName(e.moveId);
    });

    if (circles.length > 0) {
        console.debug("Circular dependencies:", circles);
    }
    if (missingMoveIdsInInputs.length > 0) {
        console.debug(
            "Failed to find following move ids in inputs:",
            missingMoveIdsInInputs.filterUnique().sortAscending(e => e.dehexUint),
        );
    }

    const hitTables = getAllHitTables(charBin);

    const charCommandListCache = getAllMoveIdsFromMoveInfos(charBin).flatMap(
        moveId => findMoveIdInCommandList(charBin, moveId),
    );

    const reportError = (function(){
        const alreadyReported = [];
        return errorMessage => {
            if (alreadyReported.includes(errorMessage)) return;
            alreadyReported.push(errorMessage);
            console.warn(errorMessage);
        };
    }());

    return {
        inputs,
        hitTables,
        analyzeMoveId,
        get movesFromUnlistedInputs() {
            return inputs.map(
                e => analyzeMoveId(e.moveId),
            ).filter(
                e => e.inputsForThisMoveId.every(
                    e => e.sections.every(section => section.split("|")[1] === "-1"),
                ),
            ).groupBy(
                e => e.moveInfo?.v.moveType.v,
            ).sortAscending(e => e.value.dehexUint).map(e => ({
                ...e,
                matches: [...e.matches].sortAscending(e => e.moveId.dehexUint),
            }));
        },
        get analyzeInputCommands() {
            return inputs.reduce((acc, m) => {
                m.inputs.forEach(i => {
                    i.parsedInput.forEach(d => {
                        let t = d.command;
                        if ([InputParser.COMMAND_SUCCESS, "00", "12", "13", "14"].includes(t)) {
                            t += "(...)"
                        } else {
                            t += "(" + d.args + ")";
                        }
                        let entry = acc.find(e => e.command === t);
                        if (!entry) {
                            entry = { command: t, count: 0, results: [] }
                            acc.push(entry);
                        }
                        entry.count += 1;
                        const existing = entry.results.find(r => r.move === m);
                        if (!existing) {
                            entry.results.push({
                                move: m,
                                inputs: [i],
                            });
                        } else {
                            existing.inputs.push(i);
                        }
                    });
                });
                return acc;
            }, []).sortAscending(e => e.command);
        },
        get analyzeInputSections() {
            return inputs.groupByMultiple(
                m => m.inputs.flatMap(
                    i => i.sections,
                ).map(
                    section => section.split("|").slice(0, -1).join("|"),
                ),
            ).sortAscending(e => [
                (e.value as any).split("|")[0],
                Number((e.value as any).split("|")[1]),
            ]).map(e => ({
                ...e,
                matches: e.matches.filterUnique(),
            }));
        },
        get movesFromInputsByMoveType() {
            return inputs.map(e => analyzeMoveId(e.moveId)).groupBy(
                e => e.moveInfo?.v.moveType.v,
            ).sortAscending(e => e.value.dehexUint).map(e => ({
                ...e,
                matches: [...e.matches].sortAscending(e => e.moveId.dehexUint),
            }));
        },
    };

    function getStanceName(stanceHexString: NumberAsAobStr) {
        return handmadeDescriptions?.stanceCharacter?.[stanceHexString];
    }

    function getMoveName(moveId: NumberAsAobStr) {
        const a = handmadeDescriptions?.moveIdCharacter?.[moveId];
        if (a || a === "") return a;

        const b = handmadeDescriptions?.moveIdBase?.moveIdCharacter?.[moveId];
        if (b || b === "") return b;

        const c = handmadeDescriptions?.animIdCharacter?.[
            getMoveInfo(charBin, moveId)?.v.animId.v
        ];
        // ANIM means auto description of an animation, no the move id
        if (c || c === "") return "ANIM: " + c;

        const d = generateDescription(moveId);
        // AUTO means auto generated description
        if (d || d === "") return "AUTO: " + d;

        return null;
    }

    function generateDescription(moveId: NumberAsAobStr) {
        const simplifiedInputs = inputs.find(
            e => e.moveId === moveId,
        )?.inputs?.map(e => e.parsedStrings?.simplified).filter(Boolean) ?? [];
        if (simplifiedInputs.length > 0) {
            // TODO: try to find ones without ? and ..., and the shortest
            let desc = simplifiedInputs[0];
            if (simplifiedInputs.length > 1) {
                desc += ` (+ ${simplifiedInputs.length - 1} other)`;
            }
            return desc;
        }
        return null;
    }

    function analyzeMoveId(moveId: NumberAsAobStr) {
        const inputsMatch = inputs.find(e => e.moveId === moveId);

        const parents  = [...(inputsMatch?.parents  ?? [])];
        const children = [...(inputsMatch?.children ?? [])];

        const moveInfo = (
            getMoveInfo(charBin, moveId) ??
            getMoveInfo(baseBin, moveId)
        );

        let hitTableEntry;
        if (["02", "03"].includes(moveInfo?.v.moveType.v)) {
            const move2ndId = moveInfo.v.secondId.v.dehexUint;
            hitTableEntry = hitTables.find(
                e => e.move2ndId === move2ndId,
            )?.value;

            if (
                hitTableEntry?.v.moveIdOnHit.v &&
                hitTableEntry?.v.moveIdOnHit.v !== "FF FF"
            ) {
                children.addUnique(hitTableEntry?.v.moveIdOnHit.v);
            }
        }

        // TODO: analogue of "hitTableEntry" for throws, holds, ground attacks etc

        if (
            moveInfo?.v.moveIdToPlayNext.v &&
            moveInfo?.v.moveIdToPlayNext.v !== "00 00"
        ) {
            children.addUnique(moveInfo?.v.moveIdToPlayNext.v);
        }

        const animationInfo = (
            getAnimationInfo(charBin, moveId) ??
            (isBaseBinMoveId(moveId) ? getAnimationInfo(baseBin, moveId) : null)
        );
        if (!animationInfo) {
            reportError(`Missing animation info for move ${moveId}`);
        }

        const commandListEntries = charCommandListCache.filter(
            e => e.moveId === moveId,
        ).map(e => ({
            ...e,
            asString: moveIdFindResultToString(e, charCommandListCache),
        }));

        return {
            moveId,
            description: inputsMatch?.description,
            moveInfo,
            hitTableEntry,
            inputsForThisMoveId: inputsMatch?.inputs ?? [],
            parents,
            children,
            animationInfo,
            commandListEntries,
        };
    }
}

}());
