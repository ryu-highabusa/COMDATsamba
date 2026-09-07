import { AobStr } from "./aliases";

declare global {

    // Missing types

    interface File {
        arrayBuffer: () => Promise<ArrayBuffer>;
    }

    // global objects from other js files

    const tools;
    const fsTools;
    const InputParser;
    var genTools;

    // Custom extensions from other js files

    interface String {
        dehexUint: number;
        dehexUintAob: Array<number>;
        aobLength: number;
    }

    interface Number {
        asAob:      Array<number>;
        asXHexStr:  string;
        asX_HexStr: string;
        asAobStr:   AobStr;
        asAob2Str:  AobStr;
        asAob4Str:  AobStr;
    }

    interface Uint8Array {
        asAobStr: AobStr;
        asFlatAobStr: AobStr;
    }

    interface Array<T> {
        asAobStr: AobStr;
        asFlatAobStr: AobStr;
        sortAscending:  (getValue?: (e: T) => unknown) => Array<T>;
        sortDescending: (getValue?: (e: T) => unknown) => Array<T>;
        filterUnique: (
            getValue?: (e: T) => unknown,
            validate?: (e: T) => unknown,
        ) => Array<T>;
        flatten: () => T extends Array<infer I> ? Array<I> : never;
        groupBy: <T2>(
            getValueToGroupBy: (e: T) => T2,
        ) => Array<{ value: T2, matches: Array<T> }>;
        groupByMultiple: <T2>(
            getValuesToGroupBy: (e: T) => Array<T2>,
        ) => Array<{ value: T2, matches: Array<T> }>;
        addUnique: (arg: T) => void;
        addDimension: (dimensionSize: number) => Array<Array<T>>;
    }
}
