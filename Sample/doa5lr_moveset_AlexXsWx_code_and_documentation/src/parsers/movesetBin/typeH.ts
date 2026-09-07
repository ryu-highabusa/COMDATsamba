import {
    VarName,
    VarPath,
    ErrorMessage,
    AobStr,
    AobMatchStr,
    NumberAsAobStr,
    NumberAsX_HexStr,
    HslTypeName,
    HslStructureName,
} from "./aliases.d";
import { ptrSize } from "./consts";
import { doesAobStrMatch } from "./aobTools";
import {
    FAddHslString,
    hslBlobName,
    hslFloatName,
    hslZStringName,
    getUintHslType,
    createHslHelper,
} from "./hslTools";
import { createFileUsageHelper } from "./fileUsageHelper";
import {
    validateBlobOneOf,
    validateUintOneOf,
    validatePtr,
    validateArrayNotEmpty,
} from "./validators";
import { readUintFrom } from "./genericTools";

// TypeH types

type First<T>   = T extends [infer TFirst, ...Array<unknown>] ? TFirst   : never;
type From2nd<T> = T extends [unknown,      ...infer TFrom2nd] ? TFrom2nd : never;

export interface ParentStructure {
    [key: string]: Parent;
}
export type ParentArray = Array<Parent>;
export type ParentValue = ReadHResult;
export type Parent = ParentStructure | ParentArray | ParentValue | null;

// Array in case it's a chain of pointers
export interface ReadHResult<T = [unknown, ...Array<unknown>]> {
    _parent?: any;
    posStart: NumberAsX_HexStr;
    rawU8A: Uint8Array;
    // value
    v: First<T>;
    dereference?: (parent: ParentValue) => ReadHResult<From2nd<T>>;
    // dereferenced
    d?: ReadHResult<From2nd<T>>;
    // isPointer
    p?: true;
}
export interface ReadHEnv {
    fileUint8Array: Uint8Array;
    getStructName:     ReturnType<typeof createHslHelper>["getStructName"];
    getArrayTypeName:  ReturnType<typeof createHslHelper>["getArrayTypeName"];
    getStructBodyLine: ReturnType<typeof createHslHelper>["getStructBodyLine"];
    markFileSection:  ReturnType<typeof createFileUsageHelper>["markFileSection"];
    reportPtr:        ReturnType<typeof createFileUsageHelper>["reportPtr"];
    rememberToExpand: (what: ReadHResult<[Uint8Array]>) => void;
    reportValidationFail: (varPath: VarPath, pos: number, errorMessage: ErrorMessage) => void;
}
interface ReadH<TArgs extends Array<unknown>, TResult> {
    (
        args: TArgs,
        env: ReadHEnv,
        posStart: number,
        varPath: VarPath,
        customAddHslString: FAddHslString,
        realAddHslString: FAddHslString,
        parent: ParentValue | null,
    ): ReadHResult<TResult>;
}

export interface TypeH<TArgs extends Array<unknown>, TResult> {
    hReaderClass: new() => HReader<TArgs, TResult>;
    args: TArgs;
}

interface HReader<TArgs extends Array<unknown>, TResult> {
    readH: ReadH<TArgs, TResult>;
}

// TypeH

export const dontDereferencePtr = null;
export const unknownBlobSize = null;

// Blob

type BlobHReaderParent = HReader<
    [
        elementsCountArg: (
            { size: number | typeof unknownBlobSize; } |
            { elementsUntil: [AobMatchStr, ...Array<AobMatchStr>]; } |
            { elementsWhile: [AobMatchStr, ...Array<AobMatchStr>]; } |
            {
                getBlobProps: (posStart: number, fileUint8Array: Uint8Array) => {
                    size: number;
                    payloadPosMin: number;
                },
            }
        ),
        expectedValues?: Array<AobStr>,
    ],
    [Uint8Array]
>;
class BlobHReader implements BlobHReaderParent {
    readonly readH: BlobHReaderParent["readH"] = (
        args, env, posStart, varPath, customAddHslString, realAddHslString, parent,
    ) => {
        const {
            elementsCount,
            elementSize,
            direction,
            payloadPosMin = posStart,
            terminatorBytesCountBefore,
            terminatorBytesCountAfter,
        } = (function(){
            const arg = args[0];
            if ("size" in arg) {
                return {
                    elementsCount: arg.size,
                    elementSize: 1,
                    direction:   1,
                    payloadPosMin: posStart,
                    terminatorBytesCountBefore: 0,
                    terminatorBytesCountAfter:  0,
                };
            }
            if ("elementsUntil" in arg) {
                return findOutElementsCount(
                    env.fileUint8Array,
                    posStart,
                    arg.elementsUntil,
                    false,
                );
            }
            if ("elementsWhile" in arg) {
                return findOutElementsCount(
                    env.fileUint8Array,
                    posStart,
                    arg.elementsWhile,
                    true,
                );
            }
            if ("getBlobProps" in arg) {
                const props = arg.getBlobProps(posStart, env.fileUint8Array);
                return {
                    elementsCount: props.size,
                    elementSize: 1,
                    direction: 1,
                    payloadPosMin: props.payloadPosMin,
                    terminatorBytesCountBefore: 0,
                    terminatorBytesCountAfter:  0,
                };
            }
            throw new Error("Invalid arg");
        }());

        console.assert(direction === 1);

        const sizeAsArray = (
            elementSize !== 1
                ? [elementsCount ?? 1, elementSize]
                : [elementsCount ?? 1]
        );
        const payloadBytesCount = sizeAsArray.reduce((acc, e) => acc * e, 1);

        const actualPosStart = payloadPosMin;
        checkBounds(
            actualPosStart - terminatorBytesCountBefore,
            terminatorBytesCountBefore + payloadBytesCount + terminatorBytesCountAfter,
            env.fileUint8Array.length,
        );
        const resultArray = env.fileUint8Array.subarray(
            actualPosStart, 
            actualPosStart + payloadBytesCount,
        );
        const result = {
            _parent: parent,
            posStart: (actualPosStart - terminatorBytesCountBefore).asX_HexStr,
            rawU8A: env.fileUint8Array.subarray(
                actualPosStart - terminatorBytesCountBefore,
                actualPosStart + payloadBytesCount + terminatorBytesCountAfter,
            ),
            v: resultArray,
        };

        if (elementsCount !== undefined && elementsCount !== null) {
            env.markFileSection(
                actualPosStart - terminatorBytesCountBefore,
                terminatorBytesCountBefore + payloadBytesCount + terminatorBytesCountAfter,
                varPath,
            );
        } else {
            console.assert(!terminatorBytesCountBefore);
            console.assert(!terminatorBytesCountAfter);
            console.assert(actualPosStart === posStart);
            env.markFileSection(posStart, 0, varPath);
            env.rememberToExpand(result);
        }
        customAddHslString(
            actualPosStart,
            varPath,
            hslBlobName,
            sizeAsArray,
            terminatorBytesCountBefore,
            terminatorBytesCountAfter,
        );

        const expectedValues = args[1];
        if (expectedValues?.length > 0) {
            const errorMessage = validateBlobOneOf(resultArray, expectedValues);
            if (errorMessage) {
                env.reportValidationFail(varPath, posStart, errorMessage);
            }
        }

        return result;
    };
}

// Zstring

type ZStringHReaderParent = HReader<
    [],
    [string]
>;
class ZStringHReader implements ZStringHReaderParent {
    readonly readH: ZStringHReaderParent["readH"] = (
        args, env, posStart, varPath, customAddHslString, realAddHslString, parent,
    ) => {
        const result = new BlobHReader().readH(
            [{ elementsUntil: ["00"] }],
            env,
            posStart,
            varPath,
            (pos, varPath, hslType) => customAddHslString(pos, varPath, hslZStringName),
            realAddHslString,
            parent,
        );
        return {
            ...result,
            v: String.fromCharCode(...Array.from(result.v)),
        };
    };
}

// uint

type UintHReaderParent = HReader<
    [
        bytesCount: number,
        validationArg?: (
            Array<number> |                   // expectedValues
            ((value: number) => ErrorMessage) // custom validator
        ),
    ],
    [NumberAsAobStr]
>;
class UintHReader implements UintHReaderParent {
    readonly readH: UintHReaderParent["readH"] = (
        args, env, posStart, varPath, customAddHslString, realAddHslString, parent,
    ) => {

        const bytesCount = args[0];

        checkBounds(posStart, bytesCount, env.fileUint8Array.length);
        const result = readUintFrom(env.fileUint8Array, posStart, bytesCount);

        env.markFileSection(posStart, bytesCount, varPath);
        customAddHslString(posStart, varPath, getUintHslType(bytesCount));
        
        const validationArg = args[1];

        if (validationArg !== undefined) {
            let errorMessage = "";
            if (Array.isArray(validationArg)) {
                const validValues = validationArg;
                errorMessage = validateUintOneOf(result, validValues);
            } else {
                errorMessage = validationArg(result);
            }
            if (errorMessage) {
                env.reportValidationFail(varPath, posStart, errorMessage);
            }
        }

        return {
            _parent: parent,
            posStart: posStart.asX_HexStr,
            rawU8A: env.fileUint8Array.subarray(posStart, posStart + bytesCount),
            v: (
                bytesCount === 2 ? result.asAob2Str :
                bytesCount === 4 ? result.asAob4Str :
                                   result.asAobStr
            ),
        };
    };
}

// zero

type ZeroHReaderParent = HReader<
    [ bytesCount: number ],
    [NumberAsAobStr]
>;
class ZeroHReader implements ZeroHReaderParent {
    readonly readH: ZeroHReaderParent["readH"] = (args, ...restArgs) => {
        const bytesCount = args[0];
        return new UintHReader().readH([ bytesCount, [0] ], ...restArgs);
    };
}

// float

type FloatHReaderParent = HReader<
    [],
    [number]
>;
class FloatHReader implements FloatHReaderParent {
    readonly readH: FloatHReaderParent["readH"] = (
        args, env, posStart, varPath, customAddHslString, realAddHslString, parent,
    ) => {
        const bytesCount = 4;
        checkBounds(posStart, bytesCount, env.fileUint8Array.length);
        const result = new Float32Array(
            env.fileUint8Array.buffer.slice(posStart, posStart + bytesCount),
        )[0];
        
        env.markFileSection(posStart, bytesCount, varPath);
        customAddHslString(posStart, varPath, hslFloatName);

        return {
            _parent: parent,
            posStart: posStart.asX_HexStr,
            rawU8A: env.fileUint8Array.subarray(posStart, posStart + bytesCount),
            v: result,
        };
    };
}

// ptr

type PtrHReaderParent = HReader<
    [
        underlayingType: (
            TypeH<any, any> |
            (typeof dontDereferencePtr) |
            // when it's this, defer execution until all other props are done
            ((parent: ParentValue, varPath: VarPath) => TypeH<any, any>)
        ),
        params?: {
            dontReportNullPtr?: boolean,
            getOffset?: (parent: ParentValue) => number,
        },
    ],
    [NumberAsAobStr, ...Array<any>] // FIXME
>;
class PtrHReader implements PtrHReaderParent {
    readonly readH: PtrHReaderParent["readH"] = (
        args, env, posStart, varPath, customAddHslString, realAddHslString, parent,
    ) => {
        const bytesCount = ptrSize;

        const params = args[1];

        checkBounds(posStart, bytesCount, env.fileUint8Array.length);
        const addr = (
            readUintFrom(env.fileUint8Array, posStart, bytesCount) +
            (params?.getOffset?.(parent) ?? 0)
        );

        const result: ReadHResult<[NumberAsAobStr, ...Array<any>]> = {
            _parent: parent,
            posStart: posStart.asX_HexStr,
            rawU8A: env.fileUint8Array.subarray(posStart, posStart + bytesCount),
            // FIXME: asAob8Str if ptrSize is 8
            v: addr.asAob4Str,
            p: true,
        };

        const errorMessage = validatePtr(
            addr,
            env.fileUint8Array.length,
            { dontReportNullPtr: params?.dontReportNullPtr },
        );
        if (errorMessage) {
            env.reportValidationFail(varPath, posStart, errorMessage);
        } else 
        if (addr !== 0) {
            const underlayingTypeArg = args[0];
            if (underlayingTypeArg !== dontDereferencePtr) {
                result.dereference = (parent: Parent) => {
                    // TODO: check if parent was the same?
                    if (result.d) return result.d;
                    const dereferencedVarPath: VarPath = [...varPath, "->"];
                    let typeH: TypeH<Array<unknown>, unknown>;
                    if (typeof underlayingTypeArg === "function") {
                        typeH = underlayingTypeArg(parent, dereferencedVarPath);
                    } else {
                        typeH = underlayingTypeArg;
                    }
                    result.d = doReadTypeH(
                        typeH,
                        env,
                        addr,
                        dereferencedVarPath,
                        realAddHslString,
                        realAddHslString,
                        result,
                    );
                    return result.d;
                };
            }
        }

        env.reportPtr(posStart, bytesCount);
        env.markFileSection(posStart, bytesCount, varPath);
        // TODO: turn into an actual pointer?
        customAddHslString(posStart, varPath, getUintHslType(ptrSize));

        return result;
    };
}

// Struct

type StructHReaderParent = HReader<
    [
       entries: Array<
           [VarName, TypeH<any, any>] |
           [VarName, TypeH<any, any>, (value: unknown, parent: Parent) => ErrorMessage]
       >,
   ],
   [Record<string, ReadHResult<Array<unknown>>>]
>;
class StructHReader implements StructHReaderParent {
    readonly readH: StructHReaderParent["readH"] = (
        args, env, posStart, varPath, customAddHslString, realAddHslString, parent,
    ) => {
        const resultAcc = createPropertyAccumulator();

        const result = {
            _parent: parent,
            posStart: posStart.asX_HexStr,
            rawU8A: null,
            v: resultAcc.result,
        };

        let pos = posStart;
        const entries = args[0];
        const dereferencer = createDereferencer();
        const toValidate = [];

        const hslStructBodyLines = [];

        for (const [varName, typeH, validator] of entries) {
            const propPos = pos;
            const propVarPath = [...varPath, varName];
            const fakeAddHslString: FAddHslString = (
                pos,
                varPath,
                hslType,
                arrayDims,
                terminatorBytesCountBefore,
                terminatorBytesCountAfter,
            ) => {
                console.assert(
                    varPath.length === propVarPath.length &&
                    varPath.every((e, i) => e === propVarPath[i])
                );
                console.assert(!terminatorBytesCountBefore);
                console.assert(!terminatorBytesCountAfter);
                hslStructBodyLines.push(
                    env.getStructBodyLine(hslType, [...varPath].pop(), arrayDims),
                );
            };
            const readHResult = doReadTypeH(
                typeH,
                env, propPos, propVarPath, fakeAddHslString, realAddHslString, result,
            );
            console.assert(propPos === readHResult.posStart.dehexUint);
            pos += readHResult.rawU8A.length;
            resultAcc.addProperty(varName, readHResult);
            dereferencer.schedule(readHResult.dereference);
            if (validator) {
                toValidate.push(() => {
                    const errorMessage = validator(readHResult.v, resultAcc.result);
                    if (errorMessage) {
                        env.reportValidationFail(propVarPath, propPos, errorMessage);
                    }
                });
            }
        }
        result.rawU8A = env.fileUint8Array.subarray(posStart, pos);
        dereferencer.run(result);
        for (const validate of toValidate) {
            validate();
        }

        env.markFileSection(posStart, pos - posStart, varPath);
        const structName = env.getStructName(hslStructBodyLines);
        customAddHslString(posStart, varPath, structName);

        return result;
    };
}

// Array

type ArrayHReaderParent = HReader<
    [
        // TODO: make size compatible with stuff like __getWordAt(__getAddrOf(__parent__)+123)?
        elementsCountArg: (
            { elementsCount: number; } |
            {
                elementsUntil: [AobMatchStr, ...Array<AobMatchStr>];
                direction?: -1 | 1;
            } |
            { elementsWhile: [AobMatchStr, ...Array<AobMatchStr>]; } |
            { elementsUntilPtr: number } |
            { getElementsCount: (parent: ParentValue) => number } |
            { getShouldContinue: (index: number, pos: number, fileUint8Array: Uint8Array) => boolean }
        ),
        underlayingType: TypeH<any, any>,
        params?: { dontReportEmpty: boolean },
    ],
    [Array<unknown>, ...Array<unknown>]
>;
class ArrayHReader implements ArrayHReaderParent {
    readonly readH: ArrayHReaderParent["readH"] = (
        args, env, posStart, varPath, customAddHslString, realAddHslString, parent,
    ) => {
        const elementsCountArg = args[0];
        // const [elementsCount, terminatorBytesCount, direction] = (function(){
        const {
            elementsCount = undefined,
            // FIXME
            // @ts-ignore
            elementSize: guessedElementSize = undefined,
            // FIXME
            // @ts-ignore
            direction = 1,
            // FIXME
            // @ts-ignore
            payloadPosMin = posStart,
            // FIXME
            // @ts-ignore
            posMax = undefined,
            // FIXME
            // @ts-ignore
            terminatorBytesCountBefore = 0,
            // FIXME
            // @ts-ignore
            terminatorBytesCountAfter = 0,
            // FIXME
            // @ts-ignore
            customShouldContinue = undefined,
        } = (function(){
            if ("elementsCount" in elementsCountArg) {
                return { elementsCount: elementsCountArg.elementsCount };
            }
            if ("elementsUntil" in elementsCountArg) {
                return findOutElementsCount(
                    env.fileUint8Array,
                    posStart,
                    elementsCountArg.elementsUntil,
                    false,
                    elementsCountArg.direction
                );
            };
            if ("elementsWhile" in elementsCountArg) {
                return findOutElementsCount(
                    env.fileUint8Array,
                    posStart,
                    elementsCountArg.elementsWhile,
                    true,
                );
            }
            if ("elementsUntilPtr" in elementsCountArg) {
                return { posMax: elementsCountArg.elementsUntilPtr };
            }
            if ("getElementsCount" in elementsCountArg) {
                return { elementsCount: elementsCountArg.getElementsCount(parent) };
            }
            if ("getShouldContinue" in elementsCountArg) {
                return { customShouldContinue: elementsCountArg.getShouldContinue };
            }
            throw new Error("Invalid array count argument");
        }());
        let pos = payloadPosMin;
        if (
            [elementsCount, posMax, customShouldContinue].filter(e => e !== undefined).length !== 1
        ) {
            throw new Error("Invalid args");
        }
        const shouldContinue = (
            (elementsCount !== undefined)
                ? (i: number, pos: number) => i < elementsCount
                : customShouldContinue || ((i: number, pos: number) => pos < posMax)
        );
        const resultArray = new Array<ReadHResult>();
        const result = {
            _parent: parent,
            posStart: null,
            rawU8A: null,
            v: resultArray,
        };
        const dereferencer = createDereferencer();
        const hslArrayEntries = new Array<{ hslType: string, varName: VarName }>();
        const elementSizes = new Array<number>();
        const typeH = args[1];
        let i = 0;
        while (shouldContinue(i, pos, env.fileUint8Array)) {
            const varName = `[${i}]`;
            const propPos = pos;
            const propVarPath = [...varPath, varName];
            const fakeAddHslString: FAddHslString = (
                pos,
                varPath,
                hslType,
                arrayDims,
                terminatorBytesCountBefore,
                terminatorBytesCountAfter,
            ) => {
                console.assert(
                    varPath.length === propVarPath.length &&
                    varPath.every((e, i) => e === propVarPath[i])
                );
                console.assert(!terminatorBytesCountBefore);
                console.assert(!terminatorBytesCountAfter);
                let newHslType = hslType;
                if (arrayDims) {
                    newHslType = env.getArrayTypeName(
                        hslType,
                        arrayDims,
                        terminatorBytesCountBefore,
                        terminatorBytesCountAfter,
                    );
                }
                hslArrayEntries.push({
                    hslType: newHslType,
                    varName: "el" + [...varPath].pop().replaceAll("[", "").replaceAll("]", ""),
                });
            };
            const readHResult = doReadTypeH(
                typeH,
                env, propPos, propVarPath, fakeAddHslString, realAddHslString, result,
            );
            console.assert(propPos === readHResult.posStart.dehexUint);
            elementSizes.push(readHResult.rawU8A.length);
            if (elementsCount === undefined && readHResult.rawU8A.length === 0) {
                throw new Error("Something went wrong");
            }
            pos += readHResult.rawU8A.length;
            resultArray.push(readHResult);
            dereferencer.schedule(readHResult.dereference);

            i += 1;
        }

        if (resultArray.length === 0) {
            const params = args[2];
            const errorMessage = validateArrayNotEmpty(resultArray.length, params);
            if (errorMessage) {
                env.reportValidationFail(varPath, posStart, errorMessage);
            }
            checkBounds(
                payloadPosMin - terminatorBytesCountBefore,
                terminatorBytesCountBefore + terminatorBytesCountAfter,
                env.fileUint8Array.length,
            );
            env.markFileSection(
                payloadPosMin - terminatorBytesCountBefore,
                terminatorBytesCountBefore + terminatorBytesCountAfter,
                varPath,
            );
            // TODO: figure out real type?
            customAddHslString(
                payloadPosMin,
                varPath,
                hslBlobName,
                [0],
                terminatorBytesCountBefore,
                terminatorBytesCountAfter,
            );

            result.posStart = (payloadPosMin - terminatorBytesCountBefore).asX_HexStr;
            result.rawU8A = env.fileUint8Array.subarray(
                payloadPosMin - terminatorBytesCountBefore,
                payloadPosMin + terminatorBytesCountAfter,
            );

            return result;
        }

        // TODO: reverse dereferencer as well?
        if (direction === -1) resultArray.reverse();
        if (
            !hslArrayEntries.length ||
            hslArrayEntries.length !== elementSizes.length
        ) throw new Error("something went wrong");

        result.posStart = (payloadPosMin - terminatorBytesCountBefore).asX_HexStr;
        result.rawU8A = env.fileUint8Array.subarray(
            payloadPosMin - terminatorBytesCountBefore,
            pos + terminatorBytesCountAfter,
        );

        dereferencer.run(result);

        env.markFileSection(
            payloadPosMin - terminatorBytesCountBefore,
            pos - (payloadPosMin - terminatorBytesCountBefore) + terminatorBytesCountAfter,
            varPath,
        );
        if (
            hslArrayEntries.every((e,i,a) => e.hslType === a[0].hslType) &&
            elementSizes.every((e,i,a) => e === a[0])
        ) {
            customAddHslString(
                payloadPosMin,
                varPath,
                hslArrayEntries[0].hslType,
                [resultArray.length],
                terminatorBytesCountBefore,
                terminatorBytesCountAfter,
            );
        } else {
            const structName = env.getStructName(
                hslArrayEntries.map(e => env.getStructBodyLine(e.hslType, e.varName)),
                terminatorBytesCountBefore,
                terminatorBytesCountAfter,
            );
            customAddHslString(
                payloadPosMin,
                varPath,
                structName,
                undefined,
                terminatorBytesCountBefore,
                terminatorBytesCountAfter,
            );
        }

        return result;
    };
}

// switch

type SwitchHReaderParent = HReader<
    [
        testFn: (parent: Parent) => number,
        ...typeHs: [TypeH<any, any>, TypeH<any, any>, ...Array<TypeH<any, any>>],
    ],
    unknown
>;
class SwitchHReader implements SwitchHReaderParent {
    readonly readH: SwitchHReaderParent["readH"] = (
        args, env, posStart, varPath, customAddHslString, realAddHslString, parent,
    ) => {
        const typeH = args[1 + args[0](parent)] as TypeH<any, any>;
        return doReadTypeH(
            typeH,
            env, posStart, varPath, customAddHslString, realAddHslString, parent,
        );
    };
}

//

export const h = {
    blob:    createHelper(BlobHReader),
    zString: createHelper(ZStringHReader),
    uint:    createHelper(UintHReader),
    zero:    createHelper(ZeroHReader),
    float:   createHelper(FloatHReader),
    ptr:     createHelper(PtrHReader),
    struct:  createHelper(StructHReader),
    array:   createHelper(ArrayHReader),
    switch:  createHelper(SwitchHReader),
};

export const bytesUntilFFType = h.blob({ elementsUntil: ["FF"] });

// FIXME: confirm types
function createHelper<T extends HReader<any, any>>(hReaderClass: new() => T) {
    type TArgs   = T extends HReader<infer I, any> ? I : never;
    type TReturn = T extends HReader<any, infer I> ? I : never;
    return (...args: TArgs): TypeH<TArgs, TReturn> => {
        return {
            hReaderClass,
            args,
        };
    };
}

export function doReadTypeH<T extends TypeH<any, any>>(
    typeH: T,
    env: ReadHEnv,
    posStart: number,
    varPath: VarPath,
    customAddHslString: FAddHslString,
    realAddHslString: FAddHslString,
    parent: ParentValue | null,
) {
    return new typeH.hReaderClass().readH(
        typeH.args,
        env, posStart, varPath, customAddHslString, realAddHslString, parent,
    );
}

// tools

function findOutElementsCount(
    fileUint8Array: Uint8Array,
    posStart: number,
    aobStrs: [AobMatchStr, ...Array<AobMatchStr>],
    include: boolean,
    direction: -1 | 1 = 1,
) {
    const elementSize = aobStrs[0].aobLength;
    console.assert(
        elementSize > 0 &&
        aobStrs.every(aobStr => aobStr.aobLength === elementSize),
    );
    let pos = posStart;
    let elementsCount = 0;
    let payloadPosMin: number | undefined = undefined;
    while (true) {
        checkBounds(pos, elementSize, fileUint8Array.length);
        const aobStr = fileUint8Array.subarray(pos, pos + elementSize).asAobStr;
        const carryOn = (
            include
                ? aobStrs.some(pattern => doesAobStrMatch(aobStr, pattern))
                : aobStrs.every(pattern => !doesAobStrMatch(aobStr, pattern))
        );
        if (!carryOn) {
            return {
                elementsCount,
                elementSize,
                direction,
                payloadPosMin,
                terminatorBytesCountBefore: !include && direction < 0 ? elementSize : 0,
                terminatorBytesCountAfter:  !include && direction > 0 ? elementSize : 0,
            };
        }
        payloadPosMin = Math.min(payloadPosMin ?? Infinity, pos);
        elementsCount += 1;
        pos += elementSize * direction;
    }
}

function checkBounds(from: number, bytes: number, length: number) {
    if (from < 0 || from + bytes > length) {
        // FIXME: better messsage
        throw new Error("EOF");
    }
}

function createPropertyAccumulator() {
    const result = Object.create(null);
    return {
        addProperty,
        result,
    };
    function addProperty(propName: VarName, value: unknown) {
        if (propName in result) {
            console.warn(`overwriting ${propName}`);
        }
        result[propName] = value;
    }
}

function createDereferencer() {
    type FDereference = (parent: Parent) => ReadHResult;
    const toDereference = new Array<FDereference>();
    return {
        schedule,
        run,
    };
    function schedule(dereference: FDereference) {
        if (dereference) {
            toDereference.push(dereference);
        }
    }
    function run(parent: Parent) {
        for (const dereference of toDereference) {
            let dereferenced = dereference(parent);
            while (dereferenced.dereference) {
                dereferenced = dereferenced.dereference(dereferenced);
            }
        }
    }
}
