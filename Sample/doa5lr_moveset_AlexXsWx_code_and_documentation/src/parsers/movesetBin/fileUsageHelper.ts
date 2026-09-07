import { VarPath, AobStr } from "./aliases.d";
import "./environment.d";
import { readUintFrom, writeUintTo, finalizeName } from "./genericTools";
import { ptrSize } from "./consts";

interface FromTo {
    from: number;
    to: number;
};

interface FsEntry extends FromTo {
    varPath: VarPath;
};

export function createFileUsageHelper(
    fileName: string,
    fileUint8Array: Uint8Array,
    skipHeavyOperations: boolean,
) {

    // Whether fileSections was modified since sorting
    let dirty = false;

    // When changing, be sure to update the dirty flag
    const fileSections = new Array<FsEntry>();

    const markFileSection = (
        from: number,
        bytesCount: number,
        varPath: VarPath,
    ) => {
        if (skipHeavyOperations) return;
        if (varPath[0] === "insight") return;
        const entry: FsEntry = { from, to: from + bytesCount, varPath };
        if (fileSections.some(fs => isFsCoveredBy(entry, fs))) return;
        for (let i = 0; i < fileSections.length; i += 1) {
            if (isFsCoveredBy(fileSections[i], entry)) {
                fileSections.splice(i--, 1);
            }
        }
        fileSections.push(entry);
        dirty = true;
    };

    const pointerLocations = new Array<number>();
    const reportPtr = (position: number, sizeOfThePtr: number) => {
        console.assert(sizeOfThePtr === ptrSize);
        pointerLocations.push(position);
    };

    return {
        markFileSection,
        reportPtr,
        findOverlaps,
        makeFoundOverlapsReadable,
        findUnusedChunks,
        createGetHit,
        createGetSize,
        // readonly due to the dirty flag
        getFileSections: () => fileSections as ReadonlyArray<FsEntry>,
        getModifiedFile,
    };

    function getModifiedFile(
        modifications: Array<{
            from: number;
            remove?: number;
            insert?: Uint8Array;
            // TODO: implement
            // relPosOfNewPtrsInInsert?: Array<number>;
        }>,
        params = { fileUint8Array, pointerLocations },
    ) {
        const mutableNotifications = modifications.map(e => ({ ...e }));
        const negPtr = getNegPtr(ptrSize);
        let fileUint8ArrayToUse = params.fileUint8Array;
        let ptrLocationsToUse = params.pointerLocations;
        let result = fileUint8ArrayToUse;
        for (let i = 0; i < mutableNotifications.length; i += 1) {
            const modification = mutableNotifications[i];

            const from = modification.from;
            const what = modification.insert ?? new Uint8Array();
            const removeAmount = modification.remove ?? 0;
            console.assert(from >= 0);
            console.assert(removeAmount >= 0);
            console.assert(from + removeAmount <= fileUint8ArrayToUse.length);
            const deltaSize = what.length - removeAmount;
            result = new Uint8Array(fileUint8ArrayToUse.length + deltaSize);
            for (let j = 0; j < from; j += 1) {
                result[j] = fileUint8ArrayToUse[j];
            }
            for (let j = 0; j < what.length; j += 1) {
                result[from + j] = what[j];
            }
            for (let j = from + removeAmount; j < fileUint8ArrayToUse.length; j += 1) {
                result[j + deltaSize] = fileUint8ArrayToUse[j];
            }
            ptrLocationsToUse = ptrLocationsToUse.filterUnique().flatMap(oldPtrLocation => {
                if (
                    oldPtrLocation >= from &&
                    oldPtrLocation + ptrSize <= from + removeAmount
                ) {
                    return [];
                }
                console.assert(
                    noOverlap(
                        [oldPtrLocation, oldPtrLocation + ptrSize],
                        [from,           from + removeAmount],
                    ),
                );
                const newPtrLocation = (
                    oldPtrLocation + (oldPtrLocation >= from ? deltaSize : 0)
                );
                const oldPtrValue = readUintFrom(
                    fileUint8ArrayToUse,
                    oldPtrLocation,
                    ptrSize,
                );
                if (oldPtrValue !== 0 && oldPtrValue !== negPtr) {
                    const newPtrValue = (
                        oldPtrValue + (oldPtrValue >= from ? deltaSize : 0)
                    );
                    if (newPtrValue !== oldPtrValue) {
                        writeUintTo(result, newPtrLocation, newPtrValue, ptrSize);
                    }
                }
                return [newPtrLocation];
            });

            for (let j = i + 1; j < mutableNotifications.length; j += 1) {
                if (mutableNotifications[j].from >= from) {
                    mutableNotifications[j].from += deltaSize;
                }
            }

            fileUint8ArrayToUse = result;
        }

        return {
            result: {
                fileUint8Array:   result,
                pointerLocations: ptrLocationsToUse,
            },
            get save() {
                (fsTools as any).saveAs(result, `modified-${fileName}`);
                return "done";
            },
        };

        function getNegPtr(ptrSize: number) {
            const uint8Array = new Uint8Array(ptrSize);
            for (let i = 0; i < ptrSize; i += 1) {
                uint8Array[i] = 0xFF;
            }
            return readUintFrom(uint8Array, 0, ptrSize);
        }

        function noOverlap(a: [number, number], b: [number, number]) {
            return a[1] <= b[0] || a[0] >= b[1];
        }
    }

    function sortSections() {
        if (!dirty) return;
        fileSections.sort((a, b) => {
            return (
                a.from - b.from ||
                b.varPath.length - a.varPath.length ||
                (b.to - b.from) - (a.to - a.from)
            );
        });
        dirty = false;
    }

    function findOverlaps(suppress: (fsa: FsEntry, fsb: FsEntry) => boolean) {
        sortSections();

        const overlaps = new Map<FsEntry, Array<FsEntry>>();
        for (let i = 0; i < fileSections.length - 1; i += 1) {
            const fsi = fileSections[i];
            for (let j = i + 1; j < fileSections.length; j += 1) {
                const fsj = fileSections[j];
                if (doFsOverlap(fsi, fsj)) {
                    if (suppress(fsi, fsj)) continue;
                    if (!overlaps.has(fsi)) overlaps.set(fsi, []);
                    overlaps.get(fsi).push(fsj);
                }
            }
        }
        return overlaps;
    }

    function makeFoundOverlapsReadable(overlaps: Map<FsEntry, Array<FsEntry>>) {
        const readableOverlaps = {};
        for (const [key, value] of overlaps) {
            readableOverlaps[makeOverlapReadable(key)] = value.map(e => makeOverlapReadable(e));
        }
        return readableOverlaps;
        function makeOverlapReadable(overlap) {
            return (
                overlap.from.asX_HexStr + " " +
                overlap.to.asX_HexStr + " " +
                finalizeName(overlap.varPath)
            );
        }
    }

    function findUnusedChunks(
        patternToIgnore: AobStr,
        range?: { min: number, max: number },
    ) {
        if (skipHeavyOperations) return { within: [] };

        sortSections();

        const unusedChunks = new Array<FromTo>();

        let inUseEnd = 0;
        
        let i = 0;

        const getHit = createGetHit();

        while (i < fileUint8Array.length) {
            const hit = getHit(i);
            if (hit) {
                const hitFrom = hit[0].dehexUint;
                const hitTo   = hit[1].dehexUint;
                if (inUseEnd < i) {
                    console.assert(hitFrom > inUseEnd);
                    unusedChunks.push({ from: inUseEnd, to: hitFrom });
                }
                inUseEnd = hitTo;
                i = (hitTo === i) ? hitTo + 1 : hitTo;
            } else {
                i += 1;
            }
        }
        if (inUseEnd < fileUint8Array.length) {
            unusedChunks.push({ from: inUseEnd, to: fileUint8Array.length });
        }

        // FIXME: name is misleading
        return groupUnusedChunks(
            unusedChunks.filter(e => {
                return !unusedChunkConsistsOf(e, patternToIgnore);
            }).map(e => ({
                from: e.from.asX_HexStr,
                to:   e.to.asX_HexStr,
            })),
            range,
        );

        function unusedChunkConsistsOf(e, pattern) {
            const patternArray = pattern.dehexUintAob;
            let p = 0;
            for (let i = e.from; i < e.to; i += 1) {
                if (fileUint8Array[i] !== patternArray[p]) return false;
                p = (p + 1) % patternArray.length;
            }
            return true;
        }
    }

    // FIXME: name is misleading
    // after and before are not arrays and must be in touch with max and min
    function groupUnusedChunks(
        unusedChunks,
        { min = -Infinity, max = Infinity } = {},
    ) {
        let before;
        let within = [];
        let after;
        for (let i = 0; i < unusedChunks.length; i += 1) {
            const chunk = unusedChunks[i];
            const from = chunk.from.dehexUint;
            const to   = chunk.to.dehexUint;
            if (from > max) break;
            if (to === min) {
                before = chunk;
                continue;
            }
            if (from === min) throw new Error("something went wrong");
            if (from === max) {
                after = chunk;
                break;
            }
            if (from > min) {
                if (to >= max) throw new Error("something went wrong");
                within.push(chunk);
            }
        }
        return {
            before,
            within,
            after,
        };
    }

    function createGetHit() {
        sortSections();

        let fsi = 0;
        return (pos: number) => {
            while (fsi < fileSections.length) {
                const fs = fileSections[fsi];
                if (fs.from > pos) return null;
                if (
                    fs.to > pos ||
                    fs.from === fs.to && fs.to === pos
                ) {
                    return [
                        fs.from.asX_HexStr,
                        fs.to.asX_HexStr,
                        finalizeName(fs.varPath),
                    ];
                }
                fsi += 1;
            }
            return null;
        };
    }

    function createGetSize() {
        sortSections();
        let i = 0;
        return (pos: number) => {
            while (i < fileSections.length && fileSections[i].from <= pos) {
                i += 1;
            }
            if (i === fileSections.length) {
                return fileUint8Array.length - pos;
            }
            return fileSections[i].from - pos;
        };
    }
}

function isFsCoveredBy(fs1: FsEntry, fs2: FsEntry) {
    return (
        fs2.from <= fs1.from &&
        fs2.to   >= fs1.to   &&
        fs2.varPath.length <= fs1.varPath.length &&
        fs2.varPath.every((e, i) => e === fs1.varPath[i])
    );
}

function doFsOverlap(fs1: FsEntry, fs2: FsEntry) {
    if (fs1.to   <= fs2.from) return false;
    if (fs1.from >= fs2.to)   return false;
    if (fs2.to   <= fs1.from) return false;
    if (fs2.from >= fs1.to)   return false;
    return true;
}
