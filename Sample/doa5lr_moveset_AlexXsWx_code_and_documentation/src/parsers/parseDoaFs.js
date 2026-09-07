// Credit note:
// Parts of this script are code from the "Archive Tool", translated and adapted to js

filesDb = {};
const warnings = new Set();
function clearFilesDbWarnings() {
    warnings.clear();
}

function getDbEntry(fname) {
    const result = filesDb[
        // FIXME: respect folders
        fname.split("/").pop().trim().toLowerCase()
    ];
    if (!result && !warnings.has(fname)) {
        warnings.add(fname);
        console.warn(`Missing ${fname}`);
    }
    return result;
}

fsTools.createFilesReceiver(async (ogFiles) => {

    clearFilesDbWarnings();

    const files = [...ogFiles];

    const sortOrder = ["bin", "lnk", "xml", "txt"];

    files.sortAscending(e => {
        let sortWeight = sortOrder.indexOf(fsTools.getFileExtension(e));
        if (sortWeight === -1) return sortOrder.length;
        return sortWeight;
    });

    for (const file of files) {
        const fileExt = fsTools.getFileExtension(file);
        const dbEntry = {
            file,
            parsed: null,
        };
        if (fileExt === "bin") {
            dbEntry.parsed = await parseBin(file);
        }
        else if (fileExt === "lnk") {
            dbEntry.parsed = await parseLnkStructure(file);
        }
        else if (fileExt === "xml") {
            dbEntry.parsed = await mapProcmonEventsToLnkStructure(
                lnkName => getDbEntry(lnkName)?.parsed ?? [],
                await parseProcmonXmlEvents(file),
                (lnkName, lnkOffset) => {
                    const binName = fsTools.replaceExtension(lnkName, "bin");
                    const lnkStructure = getDbEntry(lnkName)?.parsed;
                    const bin = getDbEntry(binName)?.parsed;
                    return bin?.encryptedNames[
                        lnkStructure?.findIndex(e => e.lnkOffset === lnkOffset) ?? -1
                    ] ?? "???";
                },
            );
        } else if (fileExt === "txt") {
            dbEntry.parsed = await parseTxt(file);
        }
        filesDb[file.name.trim().toLowerCase()] = dbEntry;
        console.log(dbEntry);
    }
});

setTimeout(() => {
    console.log("Ready to receive *.bin, *.lnk, procmon.xml and bins.txt");
});

async function parseBin(file) {
    const reader = fsTools.createFileReader(file);
    try {
        const idks = [];
        const header = await reader.readHexStr(0, 4);
        if (header !== "4C 46 4D 4F") throw new Error("Invalid header");
        idks.push(await reader.readHexStr(4, 4));
        const amountOfEntries = await reader.readInt32(8);
        // idks.push(await reader.readHexStr(12, 0x30 - 12));
        idks.push(await reader.readHexStr(12, 4));
        idks.push(await reader.readHexStr(16, 4));
        const fnameOffset1 = await reader.readInt32(20);
        const someStringOffset = await reader.readInt32(24);
        idks.push(await reader.readHexStr(28, 8));
        const fnameOffset2 = await reader.readInt32(36);
        const offsets = [];
        const weirdOffsetsIndices = [];
        for (let i = 0; i < amountOfEntries; i += 1) {
            const pos = 0x28 + i * 12;
            if (
                (0 !== await reader.readUint(pos + 0, 4)) ||
                (i !== await reader.readUint(pos + 4, 4))
            ) {
                weirdOffsetsIndices.push(i);
            }
            offsets.push(await reader.readUint(pos + 8, 4));
        }
        const fname1 = await reader.readString(fnameOffset1);
        const fname2 = await reader.readString(fnameOffset2);
        const someString = await reader.readString(someStringOffset);
        const encryptedNames = [];
        for (const offset of offsets) {
            encryptedNames.push(await reader.readString(offset));
        }
        return {
            fname1,
            fname2,
            someString,
            encryptedNames,
            idks,
            weirdOffsetsIndices,
        };
    } finally {
        await reader.destroy();
    }
}

async function parseLnkStructure(file) {
    const reader = fsTools.createFileReader(file);
    try {
        const bundledFilesCount = await reader.readUint(0x08, 4);
        const result = [];
        for (let i = 0; i < bundledFilesCount; i += 1) {
            const idks = [];
            const chunk = await reader.readUint8Array(0x20 + i * 32, 32);
            const offset = chunk.subarray( 0,  0 +  4).asAobStr.dehexUint;
            idks.push(     chunk.subarray( 4,  4 +  4).asAobStr); // always 0?
            const size   = chunk.subarray( 8,  8 +  4).asAobStr.dehexUint;
            idks.push(     chunk.subarray(12, 12 +  4).asAobStr); // always 0?
            idks.push(     chunk.subarray(16, 16 +  4).asAobStr); // always dup of size?
            idks.push(     chunk.subarray(20, 20 + 12).asAobStr); // always 0?
            result.push({
                lnkOffset: offset,                    // aka lnkEntry0
                lnkOffsetHex: offset.asX_HexStr,
                size,                                 // aka lnkEntry1
                sizeHex: size.asX_HexStr,
                idks,
            });
        }
        return result;
    } finally {
        await reader.destroy();
    }
}

/**
 * With procmon you can what the game reads from filesystem.
 * However the game doesn't read all it needs at once, so that it doesn't freeze during that time.
 * Instead, the game reads what it needs in smaller chunks.
 * This helper is designed to collapse these chunks and tell what game attempts to read
 * based on its *.bin/*.lnk combo.
 */
function mapProcmonEventsToLnkStructure(getLnkStructure, procmonEvents, getLnkSubname) {
    // Filter unique and non-empty
    const filteredEvents = procmonEvents.filter((e1, i, a) => {
        return i === a.findIndex(e2 => (
            e1.path   === e2.path &&
            e1.offset === e2.offset &&
            e1.length === e2.length
        ));
    }).filter(e => e.length > 0);

    const result = filteredEvents.map(evt => findMatch(evt));

    const parsed = result.groupBy(
        e => e.steps[0].path + " @ " + (e.lnkEntry ? e.lnkEntry.lnkOffset.asX_HexStr : null),
    ).sortDescending(
        // Not sure if this is actually needed here, just applying as part of a refactor
        e => e.matches.length,
    ).map(e => {
        const lastMatch = e.matches[e.matches.length - 1];
        e.matches.forEach((m, i, a) => {
            if (m.lnkEntry !== lastMatch.lnkEntry) {
                throw new Error("something went wrong");
            }
            if (m.lnkEntry && !arraysStartsWith(lastMatch.steps, m.steps)) {
                throw new Error("something went wrong");
            }
        });
        if (
            lastMatch.lnkEntry &&
            lastMatch.lnkEntry.size !== lastMatch.steps.reduce((acc, e) => e.length + acc, 0)
        ) {
            throw new Error("read incomplete");
        }
        return lastMatch;
    });
    return {
        result: result.map(e => {
            const path = e.steps[0].path;
            const currentLastStep = e.steps[e.steps.length - 1];
            const totalSteps = Math.max(
                ...result.filter(e2 => e2.lnkEntry === e.lnkEntry).map(e => e.steps.length),
            );
            return [
                path,
                `${getLnkSubname(path, e.steps[0].offset)}`,
                `(${e.steps.length} / ${totalSteps})`,
                `@ ${currentLastStep.offset} + ${currentLastStep.length}`,
            ].join(" ");
        }),
        parsed,
    };

    // Recursively find the entry in *.lnk file that leads to this procmon event
    function findMatch(evt, ogSteps = []) {
        const steps = [evt, ...ogSteps];
        const offset = evt.offset;
        const structureEntries = getLnkStructure(evt.path).filter(e => e.lnkOffset === offset);
        if (structureEntries.length > 1) throw new Error("multiple entries found");
        if (structureEntries.length === 1) {
            return {
                lnkEntry: structureEntries[0],
                steps,
            };
        }
        const parents = filteredEvents.filter(evt2 => {
            return (
                evt.path === evt2.path &&
                evt2.offset + evt2.length === offset
            );
        }).filter(e => e.length > 0);
        if (parents.length > 1) throw new Error("multiple parents found");
        if (parents.length === 0) return { lnkEntry: null, steps };
        return findMatch(parents[0], steps);
    }

    function arraysStartsWith(arr, startArr) {
        if (startArr.length > arr.length) return false;
        return startArr.every((e, i, a) => e === arr[i]);
    }
}
