import {
    VarName,
    ErrorMessage,
    AobStr,
} from "./aliases.d";
import { ParentStructure, ParentValue } from "./typeH";

export function validateDupOf(sourceVarName: VarName) {
    return (value: unknown, parent: ParentStructure): ErrorMessage => {
        const foundValue = (parent[sourceVarName] as ParentValue).v;
        if (value === foundValue) return "";
        return `${value} doesn't duplicate ${foundValue}`;
    };
}

export function validateNotZero(value: number): ErrorMessage {
    if (value !== 0) return "";
    return `${value.asX_HexStr} is not non-zero`;
}

export function validateUintOneOf(
    result: number,
    validValues: Array<number>,
): ErrorMessage {
    if (!validValues.includes(result)) {
        return (
            `${result.asX_HexStr} is not one of ` +
            `[${validValues.map(e => e.asX_HexStr).join(",")}]`
        );
    }
    return "";
}

export function validateBlobOneOf(
    result: Uint8Array,
    expectedValues: Array<AobStr>,
): ErrorMessage {
    const resultAsAobStr = result.asAobStr;
    if (!expectedValues.includes(resultAsAobStr)) {
        return (
            "Found value is not one of expected; " +
            `found =\n${resultAsAobStr}\n` +
            `expected =\n${expectedValues.join(",\n")}`
        );
    }
    return "";
}

export function validatePtr(
    addr: number,
    fileLength: number,
    params?: { dontReportNullPtr: boolean },
): ErrorMessage {
    if (addr >= fileLength) {
        return (
            "Pointer value is out of bounds (" +
            `${addr.asX_HexStr} / ${fileLength.asX_HexStr}` +
            ")"
        );
    } else
    if (addr === 0) {
        if (!params?.dontReportNullPtr) {
            return "Pointer is a null pointer";
        }
    }
    return "";
}

export function validateArrayNotEmpty(
    arrayLength: number,
    params?: { dontReportEmpty: boolean },
): ErrorMessage {
    if (arrayLength === 0 && !params?.dontReportEmpty) {
        return "Array is empty";
    }
    return "";
}
