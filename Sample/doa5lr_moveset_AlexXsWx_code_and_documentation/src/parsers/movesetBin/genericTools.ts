import { VarName, VarPath } from "./aliases.d";

export function createNamesGenerator() {
    const map = createDynamicMap(prefix => createNameGenerator(prefix));
    return (prefix: VarName, pad?: number) => map.getValue(prefix)(pad);
    function createNameGenerator(prefix) {
        let counter = 0;
        return (pad: number = 0) => `${prefix}${String(++counter).padStart(pad, "0")}`;
    }
}

export function createDynamicMap<T, K = string>(construct: (key: K) => T) {
    const map = new Map<K, T>();
    return { getValue };
    function getValue(key: K) {
        if (!map.has(key)) {
            const value = construct(key);
            map.set(key, value);
            return value;
        } else {
            return map.get(key);
        }
    }
}

export function reindent(delta: number, str: string) {
    if (delta < 0) {
        return str.split("\n").map(e => {
            if (e.substr(0, -delta).trim()) throw new Error("Invalid reindent");
            return e.substr(-delta);
        }).join("\n");
    } else {
        let prefix = "";
        for (let i = 0; i < delta; i += 1) prefix += " ";
        return str.split("\n").map(e => `${prefix}${e}`).join("\n");
    }
}

export function finalizeName(varPath: VarPath) {
    console.assert(varPath.length > 0);
    let varName = varPath[0];
    for (let i = 1; i < varPath.length; i += 1) {
        if (
            varPath[i] === "->" &&
            i === varPath.length - 1
        ) {
            varName = `*(${varName})`;
        } else
        if (
            varPath[i][0] === "[" ||
            (Number(varPath[i] === "->") ^ Number(varPath[i - 1] === "->"))
        ) {
            varName += varPath[i];
        } else {
            varName += "." + varPath[i];
        }
    }
    return varName;
}

export function readUintFrom(
    uint8Array: Uint8Array,
    posStart: number,
    bytesCount: number,
): number {
    console.assert([1, 2, 4, 8].includes(bytesCount));
    let value = 0;
    for (let i = 0; i < bytesCount; i += 1) {
        // Not using bit operations as they are messed up for big numbers
        value += uint8Array[posStart + i] * Math.pow(2, 8 * i);
    }
    return value;
}

export function writeUintTo(
    outUint8Array: Uint8Array,
    posStart: number,
    value: number,
    bytesCount: number,
) {
    console.assert([1, 2, 4, 8].includes(bytesCount));
    console.assert(posStart + bytesCount <= outUint8Array.length);
    const aob = value.asAob;
    if (aob.length > 1 && aob[aob.length - 1] === 0) aob.pop();
    console.assert(aob.length <= bytesCount);
    for (let i = 0; i < bytesCount; i += 1) {
        outUint8Array[posStart + i] = (i < aob.length) ? aob[i] : 0;
    }
}
