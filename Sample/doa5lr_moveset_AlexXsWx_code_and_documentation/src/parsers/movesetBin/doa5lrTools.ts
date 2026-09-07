import { NumberAsAobStr } from "./aliases.d";
import "./environment.d";

const doa5lrMoveIdCategoryData = [
    { category: 0, start: 0x0000 }, // 0 * 8000 =     0
    { category: 1, start: 0x1f40 }, // 1 * 8000 =  8000
    { category: 2, start: 0x3e80 }, // 2 * 8000 = 16000
    // yep, category is out of order here
    { category: 5, start: 0x5dc0 }, // 3 * 8000 = 24000
    { category: 3, start: 0x7d00 }, // 4 * 8000 = 32000
    { category: 4, start: 0x9c40 }, // 5 * 8000 = 40000
];

export function getMoveId(category: number, index: number) {  
    console.assert(index < 8000);
    const entry = doa5lrMoveIdCategoryData.find(e => e.category === category);
    return (entry.start + index).asAob2Str;
}

export function getMoveCategoryAndIndex(moveIdStr: NumberAsAobStr) {
    const moveId = moveIdStr.dehexUint;

    if (moveId < 0 || !isFinite(moveId)) {
        // TODO: this will probably never go off since it's all uints everywhere
        //       introduce a sign or add validation for the sign bit on read
        // OG asm code returns category 0, but what to return as index?
        throw new Error("Invalid move id");
    }

    // OG asm code to retrieve category:
    // if (moveId < 0x0000) return 0; // 0 * 8000 =     0
    // if (moveId < 0x1f40) return 0; // 1 * 8000 =  8000
    // if (moveId < 0x3e80) return 1; // 2 * 8000 = 16000
    // if (moveId < 0x5dc0) return 2; // 3 * 8000 = 24000
    // if (moveId < 0x7d00) return 5; // 4 * 8000 = 32000
    // if (moveId < 0x9c40) return 3; // 5 * 8000 = 40000
    // return 4;

    const entry = [...doa5lrMoveIdCategoryData].reverse().find(e => moveId >= e.start);
    const category = entry.category;
    const index = moveId - entry.start;
    console.assert(index < 8000);
    return { category, index };
}

export function getBaseBinMoveIdCategory() { return 5; }

export function isBaseBinMoveId(moveId: NumberAsAobStr) {
    return (
        getMoveCategoryAndIndex(moveId).category ===
        getBaseBinMoveIdCategory()
    );
}

// TODO: do again with 1.10c
//
// Object.values(parsed.bins).flatMap(
//     charBin => genTools.getAllMoveIdsFromMoveInfos(charBin).flatMap(
//         moveId => genTools.findMoveIdInCommandList(charBin, moveId).flatMap(
//             e => e.match.arrayIJ.pInputStr.d.v.split("")
//         ),
//     ),
// ).filterUnique().sortAscending()
//
// All characters used in 1.02a: "12346789_FPKNAS+.CcHhYyIiLRT"
// F = H
// S = +H-H (e.g. `S+K` from akira)
// N = T
// A = Ap
// . = * (e.g. `2N.N`)
// c = charge (button, e.g. `1cP+K`)
// C = heavy charge (button, e.g. `46CN`)
// _ = hold (direction, e.g. `3_PP` or `PP4_`)
// h = 214
// H = 236
// y = 624
// Y = 426
// L = 248
// R = 268
// I = 4862
// i = 6842
// T = 36842 (e.g. `YN.46N.TN` or `H46N.hRN.TTN`)
export function createInputComparator(inputPattern: string) {

    const processedPattern = process(
        inputPattern
            .replaceAll("p", "P")
            .replaceAll("k", "K")
            .replaceAll("t", "T")
            .replaceAll("h", "F")
            .replaceAll("H", "F")
            .replaceAll("4123698", "O")
            .replaceAll("4789632", "O")
            .replaceAll("6321478", "O")
            .replaceAll("6987432", "O")
            .replaceAll("23698", "R")
            .replaceAll("21478", "L")
            .replaceAll("63214", "y")
            .replaceAll("41236", "Y")
            .replaceAll("4268", "O")
            .replaceAll("4862", "O")
            .replaceAll("6248", "O")
            .replaceAll("6842", "O")
            .replaceAll("624", "y")
            .replaceAll("426", "Y")
            .replaceAll("268", "R")
            .replaceAll("248", "L")
            .replaceAll("214", "h")
            .replaceAll("236", "H")
            .replaceAll("24",  "h")
            .replaceAll("26",  "H")
            .replaceAll("AP", "A")
            .replaceAll("((", "C")
            .replaceAll("))", "")
            .replace(/\((\d)\)/g, (match, firstGroup) => `${firstGroup}_`)
            .replaceAll("(", "c")
            .replaceAll(")", "")
            .replaceAll("S", "F+P+K")
            .replaceAll("T", "N")
            .replaceAll("T", "O")
            .replaceAll("I", "O")
            .replaceAll("i", "O")
            .replaceAll("*", ".")
            .replaceAll("~", ".")
    );

    return doesInputSatisfyPattern;

    function doesInputSatisfyPattern(input: string) {
        const processedInput = process(
            input
                .replaceAll("T", "O")
                .replaceAll("I", "O")
                .replaceAll("i", "O")
                .replaceAll("24", "h")
                .replaceAll("26", "H")
        );
        let j = 0;
        for (let i = 0; i < processedInput.length; i += 1) {
            if (processedInput[i] === processedPattern[j]) {
                j += 1;
                if (j >= processedPattern.length) return true;
            }
        }
        return false;
    }

    function process(input: string) {
        return input.replaceAll(" ", "").split("");
    }
}
