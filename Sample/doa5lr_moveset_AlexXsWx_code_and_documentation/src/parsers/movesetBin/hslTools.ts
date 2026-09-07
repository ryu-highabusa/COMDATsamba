import {
    NumberAsX_HexStr,
    VarName,
    VarPath,
    HslTypeName,
    HslStructureName,
} from "./aliases.d";
import "./environment.d";
import {
    createNamesGenerator,
    createDynamicMap,
    reindent,
    finalizeName,
} from "./genericTools";
import { ptrSize } from "./consts";

export interface FAddHslString {
    (
        pos: number,
        varPath: VarPath,
        hslType: HslTypeName,
        arrayDims?: Array<number>,
        terminatorBytesCountBefore?: number,
        terminatorBytesCountAfter? : number,
    ): void;
}

export const hslBlobName    = "blob";
export const hslFloatName   = "FLOAT";
export const hslZStringName = "zstring";
const hslUByteName = "UBYTE";
const hslWordName  = "WORD";
const hslDWordName = "DWORD";

export function getUintHslType(bytesCount: number) {
    if (bytesCount === 1) return hslUByteName;
    if (bytesCount === 2) return hslWordName;
    if (bytesCount === 4) return hslDWordName;
    throw new Error("unsupported uint bytes count");
}

export function createHslHelper(markTerminators: boolean) {

    const maxArraySize = 16384;
    const maxArraySizes = new Array<number>();
    maxArraySizes.push(1024);

    //

    const getName = createNamesGenerator();

    const hslTypes = [];
    const hslLines = new Array<{
        pos: number;
        structName: HslStructureName;
        varName: VarName;
        type?: string;
    }>();

    const generatedStructureNames = new Set<HslStructureName>();
    const usedStructureNames = new Set<HslStructureName>();
    let structsAdded = 0;
    const namePerDynamicStructBody = createDynamicMap(body => {
        const name = getName("S", 3);
        generatedStructureNames.add(name);
        hslTypes.push(
            `typedef struct ${name} {` +
                (body.indexOf("\n") === -1 ? ` ${body} ` : "\n" + reindent(4, body) + "\n") +
            `} ${name};`,
        );
        return name;
    });

    //

    const getStructName = (
        structBody: Array<string>,
        terminatorBytesCountBefore?: number,
        terminatorBytesCountAfter?:  number,
    ): HslStructureName => {
        const lines = [];
        if (markTerminators && terminatorBytesCountBefore > 0) {
            lines.push(
                getStructBodyLine(hslBlobName, "terminatorBefore", [terminatorBytesCountBefore]),
            );
        }
        lines.push(...structBody);
        if (markTerminators && terminatorBytesCountAfter > 0) {
            lines.push(
                getStructBodyLine(hslBlobName, "terminatorAfter", [terminatorBytesCountAfter]),
            );
        }
        return namePerDynamicStructBody.getValue(lines.join("\n"));
    }

    const getArrayTypeName = (
        type: HslTypeName,
        dims: Array<number>,
        terminatorBytesCountBefore?: number,
        terminatorBytesCountAfter?:  number,
    ): HslStructureName => {
        return getStructName(
            [getStructBodyLine(type, "entries", dims)],
            terminatorBytesCountBefore,
            terminatorBytesCountAfter,
        );
    };

    const addHslStructureAt = (
        pos: number,
        structName: HslStructureName,
        varName: VarName,
        type?: string,
    ) => {
        structsAdded += 1;
        usedStructureNames.add(structName);
        hslLines.push({ pos, structName, varName, type });
    };

    const addHslString: FAddHslString = function(
        pos,
        varPath,
        hslType,
        arrayDims?,
        terminatorBytesCountBefore?,
        terminatorBytesCountAfter?,
    ) {
        let posToUse = pos;
        if (markTerminators && terminatorBytesCountBefore) {
            posToUse -= terminatorBytesCountBefore;
        }
        let structName = hslType;
        if (arrayDims) {
            structName = getArrayTypeName(
                hslType,
                arrayDims,
                terminatorBytesCountBefore,
                terminatorBytesCountAfter,
            );
        } else {
            if (!generatedStructureNames.has(hslType)) {
                structName = getStructName(
                    [getStructBodyLine(hslType, "unnamed")],
                    terminatorBytesCountBefore,
                    terminatorBytesCountAfter,
                );
            }
        }
        addHslStructureAt(posToUse, structName, finalizeName(varPath));
    }

    return {
        getStructName,
        getArrayTypeName,
        getStructBodyLine,
        addHslStructureAt,
        addHslString,
        markUnusedChunks,
        exportHslCode,
    };

    function getStructBodyLine(
        hslType: HslTypeName,
        varName: VarName,
        arrayDims?: Array<number>,
    ): string {
        const optDimsStr = (arrayDims ?? []).map(e => `[${e}]`).join("");
        if (arrayDims) {
            const realSize = arrayDims.reduce((acc, e) => acc * e, 1);
            // FIXME: make sure this check in all relevant places
            if (maxArraySize <= realSize) {
                // TODO: use `reportValidationFail`?
                console.warn(
                    "Exceeding max array size: " +
                    arrayDims.join(" * ") +
                    ` = ${realSize} / ${maxArraySize}`
                );
                maxArraySizes.push(realSize);
            }
        }
        return `${hslType} ${varName}${optDimsStr};`;
    }

    function markUnusedChunks(
        unusedChunks: Array<{ from: NumberAsX_HexStr, to: NumberAsX_HexStr }>,
        namePrefix: VarName = "unused",
    ) {
        for (const chunk of unusedChunks) {
            const bytesCount = chunk.to.dehexUint - chunk.from.dehexUint;
            addHslStructureAt(
                chunk.from.dehexUint,
                getArrayTypeName(hslBlobName, [bytesCount]),
                finalizeName([getName(namePrefix)]),
                "unused",
            );
        }
    }

    function exportHslCode(
        name: string,
        params: { unused: boolean, showUnusedFirst?: boolean },
    ) {
        const reportStr = (
            `${usedStructureNames.size} / ${generatedStructureNames.size} ` +
            `generated names are used; ${structsAdded} marks added`
        );

        const hslHeader = getHslHeader(
            name,
            Math.min(
                maxArraySize,
                Math.max(...maxArraySizes),
            ),
        );

        const getPriority = (
            entry => (params.showUnusedFirst && entry.type === "unused") ? 1 : 0
        );
        let hslLinesToUse = [...hslLines];
        if (!params.unused) {
            hslLinesToUse = hslLinesToUse.filter(entry => entry.type !== "unused");
        }
        const hslFunction = getHslFunction(
            hslLinesToUse.sort((a, b) => {
                const priorityA = getPriority(a);
                const priorityB = getPriority(b);
                return (
                    priorityB - priorityA ||
                    a.pos - b.pos
                );
            }).map(e => (
                `__addStructureAt(` +
                    `${e.pos.asXHexStr}, ` +
                    `"${e.structName}", ` +
                    `"${e.varName}"` +
                `);`
            )).join("\n")
        );

        return {
            reportStr,
            hslCode: [
                hslHeader,
                hslTypes.join("\n"),
                hslFunction,
            ].join("\n\n//\n\n") + "\n",
        };
    }
}

function getHslHeader(name: string, maxArraySize: number) {
    return reindent(-8, `
        #pragma displayname("${name}")
        #pragma fileextensions(".bin")
        #pragma byteorder(little_endian)

        // Default pointer size (4 bytes / 32 bits).  This controls how many bytes are
        // dedicated to a pointer (e.g. struct myStructure* myName).
        #pragma ptrsize(${ptrSize})

        // Default enumeration size (4 bytes / 32 bits).  You may set this to 1, 2, 4,
        // or 8 bytes.
        #pragma enumsize(4)
        // Default enumeration sign (either "signed" or "unsigned")
        #pragma enumsign("signed")

        // Default structure Packing (1 byte).
        #pragma pack(1)   // NOT YET IMPLEMENTED

        // Default max array length.  The maximum array size can range between 1 and 
        // 16384 entries, inclusively.  This limit helps guard against run-away arrays
        // when the data does not match expectations.
        #pragma maxarray(${maxArraySize})

        #pragma hide()

        // Standard Types
        typedef          char            CHAR ;
        typedef          wchar           WCHAR ;
        typedef signed   __int8          BYTE ;
        typedef          BYTE            byte ;
        typedef unsigned __int8          ${hslUByteName} ;
        typedef          ${hslUByteName} ubyte ;
        typedef unsigned __int16         ${hslWordName} ;
        typedef          ${hslWordName}  word ;
        typedef unsigned __int16         USHORT ;
        typedef          USHORT          ushort ;
        typedef          short           SHORT ;
        typedef unsigned __int32         ${hslDWordName} ;
        typedef          ${hslDWordName} dword ;
        typedef          long            LONG ;
        typedef unsigned __int32         ULONG ;
        typedef          ULONG           ulong ;
        typedef signed   __int64         QUAD ;
        typedef          QUAD            quad ;
        typedef unsigned __int64         UQUAD ;
        typedef          UQUAD           uquad ;
        typedef          float           ${hslFloatName} ;
        typedef          double          DOUBLE ;
    `);
}

function getHslFunction(body: string) {
    return (
        "function AutoParseFile {\n" +
            reindent(4, body) + "\n" +
        "}"
    );
}
