tools = (function(){

(function(){

    Object.defineProperties(Number.prototype, {
        "asAob": {
            configurable: true,
            get() {
                const num = validateHexing(this.valueOf());
                let t = num;
                const result = [];
                do {
                    // not using bit operations as they get messed up for big numbers
                    const newFull = Math.floor(t / 0x100);
                    const remainder = t - newFull * 0x100;
                    t = newFull;
                    result.push(remainder);
                } while (t > 0);
                return result;
            },
        },
        "asAobStr": {
            configurable: true,
            get() { return this.valueOf().asAob.asAobStr; },
        },
        "asAob2Str": {
            configurable: true,
            get() {
                let result = this.asAobStr;
                while (result.length < "?? ??".length) result += " 00";
                return result;
            },
        },
        "asAob4Str": {
            configurable: true,
            get() {
                let result = this.asAobStr;
                while (result.length < "?? ?? ?? ??".length) result += " 00";
                return result;
            },
        },
        "asHexStr": {
            configurable: true,
            get() { return validateHexing(this.valueOf()).toString(16).toUpperCase(); },
        },
        "asXHexStr": {
            configurable: true,
            get() { return `0x${this.asHexStr}`; },
        },
        "asX_HexStr": {
            configurable: true,
            get() {
                let result = this.asHexStr;
                if (result.length % 2 !== 0) result = "0" + result;
                return `0x${result.splitBySize(2).join("_")}`;
            },
        },
        "asX_Hex4Str": {
            configurable: true,
            get() { return "0x" + this.asAob4Str.split(" ").reverse().join("_"); },
        },
    });

    function validateHexing(num) {
        if (isNaN(num))     throw new Error("Can't hex NaN");
        if (!isFinite(num)) throw new Error("Can't hex infinities");
        if (num < 0)        throw new Error("Can't hex negative numbers");
        if (num % 1 !== 0)  throw new Error("Can't hex floats");
        return num;
    }

    Object.defineProperties(String.prototype, {
        "dehexUint": {
            configurable: true,
            get() {
                const str = this.valueOf().trim();
                const sanitized = str.replaceAll("_", "");
                if (!sanitized) throw new Error("Can't dehex empty string");
                if (sanitized.startsWith("0x")) {
                    // big endian
                    return parseInt(sanitized.substr(2), 16);
                }
                if (sanitized.indexOf(" ") > 0) {
                    // little endian
                    return sanitized.split(" ").reduce(
                        // not using bit operations as they get signed at some point
                        (acc, e, i) => acc + parseInt(e, 16) * Math.pow(2, 8 * i),
                        0,
                    );
                }
                // little endian
                return parseInt(sanitized, 16);
            },
        },
        "dehexUintAob": {
            configurable: true,
            get() {
                const str = this.valueOf();
                if (!str) return [];
                const trimmed = str.trim();
                if (!/^[0-9A-F ]+$/i.test(trimmed)) {
                    throw new Error("Invalid format");
                }
                const chunks = trimmed.split(/\s+/);
                if (chunks.length === 1 && !chunks[0]) {
                    throw new Error("Invalid format");
                }
                return chunks.flatMap(chunk => {
                    if (
                        !chunk ||
                        chunk.length % 2 !== 0
                    ) {
                        throw new Error("invalid format");
                    }
                    return chunk.splitBySize(2).map(e => parseInt(e, 16));
                });
            },
        },
        "aobLength": {
            configurable: true,
            get() {
                const str = this.valueOf();
                if (!str) return 0;const trimmed = str.trim();
                if (!/^[?0-9A-F ]+$/i.test(trimmed)) {
                    throw new Error("Invalid format");
                }
                const chunks = trimmed.split(/\s+/);
                if (chunks.length === 1 && !chunks[0]) {
                    throw new Error("Invalid format");
                }
                return chunks.reduce((acc, chunk) => {
                    if (
                        !chunk ||
                        chunk.length % 2 !== 0
                    ) {
                        throw new Error("invalid format");
                    }
                    return acc + chunk.length / 2;
                }, 0);
            },
        },
    });

    String.prototype.splitBySize = function(chunkSize) {
        const string = this;
        if (
            typeof chunkSize !== "number" ||
            !(chunkSize >= 1) ||
            (chunkSize % 1) !== 0 ||
            !isFinite(chunkSize)
        ) {
            throw new Error("Invalid argument");
        }
        const result = [];
        let i = 0;
        while (i < string.length) {
            result.push(string.substr(i, chunkSize));
            i += chunkSize;
        }
        return result;
    };

    Uint8Array.prototype.logPrettyAob = function(
        width = 16,
        optAddress,
        optGetBgColorAt,
    ) {
        const array = Array.from(this).addDimension(width);
        if (array.length === 0 || array.length === 1 && !array[0]) {
            console.log("\n<empty>");
            return;
        }
        const manager = createColoredLogManager();
        if (typeof optAddress === "number") {
            // TODO: use this to display addrs
            manager.addStr(optAddress.asHexStr.padStart(8, "0"));
        }
        manager.addStr("\n");
        for (let i = 0; i < array.length; i += 1) {
            const bytes = array[i];
            const offset = (optAddress ?? 0) + i * width;
            // manager.addStr(offset.asHexStr.padStart(8, "0") + "   ");
            for (let j = 0; j < bytes.length; j += 1) {
                const byte = bytes[j];
                manager.addStr(
                    " ",
                    undefined,
                    optGetBgColorAt?.(offset + j - 0.33),
                );
                manager.addStr(
                    byte.asAobStr,
                    getColorOf(byte),
                    optGetBgColorAt?.(offset + j),
                );
                manager.addStr(
                    " ",
                    undefined,
                    optGetBgColorAt?.(offset + j + 0.33),
                );
            }
            manager.addStr("\n");
        }
        manager.logResult();
        return;
        function getColorOf(byte) {
            if (byte === 0x00) return "#555";
            if (byte === 0xFF) return "#777";
            return "#fff";
        }
    };

    Object.defineProperties(Uint8Array.prototype, {
        "asAobStr": {
            configurable: true,
            get() { return arrayToAobStr(this, true, false); },
        },
        "asFlatAobStr": {
            configurable: true,
            get() { return arrayToAobStr(this, false, false); },
        },
    });

    Object.defineProperties(Array.prototype, {
        "asAobStr": {
            configurable: true,
            get() { return arrayToAobStr(this, true, true); },
        },
        "asFlatAobStr": {
            configurable: true,
            get() { return arrayToAobStr(this, false, true); },
        },
    });

    function arrayToAobStr(array, separate, validate) {
        let result = "";
        for (let i = 0; i < array.length; i += 1) {
            const element = array[i];
            if (validate && !(
                typeof element === "number" &&
                element >= 0 &&
                element <= 255 &&
                element % 1 === 0
            )) {
                throw new Error("Invalid format");
            }
            result += element.asHexStr.padStart(2, "0");
            if (separate && i < array.length - 1) result += " ";
        }
        return result;
    }

    // TODO: unit tests
    Array.prototype.addDimension = function(dimensionSize) {
        const array = this;
        return array.reduce(
            (acc, e) => {
                const last = acc[acc.length - 1];
                if (last && last.length < dimensionSize) {
                    last.push(e);
                } else {
                    acc.push([e]);
                }
                return acc;
            },
            [],
        );
    };

    // TODO: unit tests
    Array.prototype.sortAscending = function(getValue = e => e) {
        return this.sort((a, b) => compare(getValue(a), getValue(b)));
    };

    // TODO: unit tests
    Array.prototype.sortDescending = function(getValue = e => e) {
        return this.sort((a, b) => -compare(getValue(a), getValue(b)));
    };

    function compare(valueA, valueB) {
        if (Array.isArray(valueA) || Array.isArray(valueB)) {
            if (
                !Array.isArray(valueA) ||
                !Array.isArray(valueB) ||
                valueA.length !== valueB.length ||
                !(valueA.length > 0)
            ) {
                throw new Error("Invalid sort weight");
            }
            for (let i = 0; i < valueA.length; i += 1) {
                if (valueA[i] > valueB[i]) return 1;
                if (valueA[i] < valueB[i]) return -1;
            }
        } else {
            if (valueA > valueB) return 1;
            if (valueA < valueB) return -1;
        }
        return 0;
    }

    // TODO: unit tests
    Array.prototype.filterUnique = function(
        getValue = e => e,
        optValidateEqual,
    ) {
        return this.filter((e, i, a) => {
            return i === a.findIndex(e2 => {
                if (getValue(e2) !== getValue(e)) return false;
                if (optValidateEqual) {
                    console.assert(optValidateEqual(e2) === optValidateEqual(e));
                }
                return true;
            });
        });
    };

    Array.prototype.flatten = function() {
        return this.flatMap(e => e);
    };

    // TODO: unit tests
    Array.prototype.groupBy = function(getValueToGroupBy) {
        const array = this;
        return array.groupByMultiple(e => [getValueToGroupBy(e)]);
    };

    // TODO: unit tests
    // TODO: multidimensional grouping, mapping, filtering?
    Array.prototype.groupByMultiple = function(getValuesToGroupBy) {
        const array = this;
        const results = [];
        array.forEach(e => {
            for (const val of getValuesToGroupBy(e)) {
                let entry = results.find(r => r.value === val);
                if (!entry) {
                    entry = {};
                    entry.value = val;
                    entry.matches = [];
                    results.push(entry);
                }
                entry.matches.push(e);
            }
        });
        return results;
    };

    Array.prototype.findIndices = function(predicate) {
        return this.flatMap((e, i, a) => {
            if (predicate(e, i, a)) return [i];
            return [];
        });
    };

    Array.prototype.addUnique = function(arg) {
        const array = this;
        if (!array.includes(arg)) array.push(arg);
    };
}());

function createWalkOrder(array, getParents, optOutCircles) {

    const visited = [];
    const currentlyVisiting = [];
    const circles = [];
    for (let i = 0; i < array.length; i += 1) {
        visit(array[i]);
    }
    return visited;

    function visit(element) {
        if (currentlyVisiting.includes(element)) return true;
        currentlyVisiting.push(element);
        for (const parent of getParents(element, array)) {
            const goneCircular = visit(parent);
            if (goneCircular) {
                addUniqueCircle([...currentlyVisiting]);
            }
        }
        currentlyVisiting.pop();
        if (!visited.includes(element)) {
            // TODO: sort circles?
            visited.push(element);
        }
        return false;
    }

    function addUniqueCircle(newCircle) {
        for (const circle of circles) {
            if (circle.length !== newCircle.length) continue;
            for (let i = 0; i < newCircle.length; i += 1) {
                if (circle.every((e, j) => e === newCircle[(i + j) % circle.length])) {
                    return;
                }
            }
        }
        circles.push(newCircle);
        if (!optOutCircles) {
            console.warn("Circular relationship", newCircle);
        } else {
            optOutCircles.push(newCircle);
        }
    }
}

// FIXME: this doesn't keep undefined, functions and non-serializable stuff
function deepCopy(data) {
    return JSON.parse(JSON.stringify(data));
}

function dechunkify(data) {
    const result = deepCopy(data);
    outer: while(true) {
        for (const entry of result) {
            for (const entry2 of result) {
                if (
                    entry2 !== entry &&
                    entry.offset + entry.length === entry2.offset
                ) {
                    entry.length += entry2.length;
                    const index = result.indexOf(entry2);
                    result.splice(index, 1);
                    continue outer;
                }
            }
        }
        break;
    }
    return result;
}

function discoverPtrsRange(flatAobStr, ptrSize = 4) {
    const pointers = flatAobStr.splitBySize(ptrSize * 2).map(
        e => parseInt(
            e.splitBySize(2).reverse().join(""),
            16
        )
    );
    const sorted = [...pointers].sortAscending();
    return {
        pointers: pointers.map(e => ptrToString(e)),
        sorted: sorted.filterUnique().map((e, i, a) => {
            const indices = pointers.findIndices(e2 => e2 === e);
            const offsetFromPrevious = (i > 0) ? (e - a[i - 1]).asXHexStr : "";
            const result = [ptrToString(e)];
            if (offsetFromPrevious) result.push(`previous + ${offsetFromPrevious}`);
            result.push(`indices = ${indices.join(", ")}`)
            return result.join("; ");
        })
    };
    function ptrToString(ptr) {
        return "0x" + ptr.toString(16).padStart(ptrSize * 2, "0").splitBySize(2).join("_");
    }
}

function createColoredLogManager() {
    const styles = [];
    const strs = [];
    let lastColor;
    let lastBgColor;
    return {
        addStr,
        logResult,
    };
    function addStr(str, optColor, optBgColor) {
        const bgColorStyle = optBgColor ? `background-color: ${optBgColor}` : "";
        const colorStyle   = optColor   ? `color: ${optColor}` : "";
        let newStyle = [colorStyle, bgColorStyle].filter(Boolean).join("; ");
        if (newStyle) {
            strs.push(`%c${str}`);
            styles.push(newStyle);
        } else {
            strs.push(`%c${str}`);
            styles.push("color: grey; background-color: initial");
        }
    }
    function logResult() {
        console.log(strs.join(""), ...styles);
    }
}

function groupForEachKey(array, keysToExclude = []) {
    const result = [];
    const exampleElement = array[0] ?? {};
    for (key in exampleElement) {
        if (
            Object.prototype.hasOwnProperty.call(exampleElement, key) &&
            !keysToExclude.includes(key)
        ) {
            const subresult = {};
            subresult.key = key;
            if (Array.isArray(exampleElement[key])) {
                subresult.subkeys = exampleElement[key].map((e, i) => ({
                    key: i,
                    grouped: array.groupBy(e => e[key][i]).sortDescending(e => e.matches.length)
                }));
            } else {
                subresult.grouped = array.groupBy(e => e[key]).sortDescending(e => e.matches.length);
            }
            result.push(subresult);
        }
    }
    return result;
}

return {
    createWalkOrder,
    dechunkify,
    discoverPtrsRange,
    groupForEachKey,
};
}())
