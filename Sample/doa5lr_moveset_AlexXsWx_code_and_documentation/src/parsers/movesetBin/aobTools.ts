import {
    AobStr,
    AobMatchStr,
} from "./aliases.d";

export function doesAobStrMatch(aobStr: AobStr, test: AobMatchStr) {
    if (aobStr.length !== test.length) throw new Error("Something went wrong");
    for (let i = 0; i < aobStr.length; i += 1) {
        if (test[i] !== "?") {
            if (test[i] !== aobStr[i]) return false;
        }
    }
    return true;
}

export function findAobs(fileUint8Array: Uint8Array, patternArray: Array<number>, posStart: number) {
    const results = [];
    let i = posStart;
    while (true) {
        i = findAob(fileUint8Array, patternArray, i);
        if (i === -1) return results;
        results.push(i);
        i += 1;
    }
}

export function findAob(fileUint8Array: Uint8Array, patternArray: Array<number>, posStart: number) {
    for (let i = posStart; i <= fileUint8Array.length - patternArray.length; i += 1) {
        if (patternArray.every((e, j) => e === fileUint8Array[i + j])) {
            return i;
        }
    }
    return -1;
}
