(function(){

// testNumberStringConversions

const hexOrder =  [ "asAobStr", "asAob2Str", "asAob4Str",   "asHexStr", "asXHexStr", "asX_HexStr",   "asX_Hex4Str" ];
[
    [ 0x0,        [ "00",       "00 00",     "00 00 00 00",        "0",       "0x0",       "0x00", "0x00_00_00_00" ] ],
    [ 0x1,        [ "01",       "01 00",     "01 00 00 00",        "1",       "0x1",       "0x01", "0x00_00_00_01" ] ],
    [ 0x23,       [ "23",       "23 00",     "23 00 00 00",       "23",      "0x23",       "0x23", "0x00_00_00_23" ] ],
    [ 0x04_56,    [ "56 04",    "56 04",     "56 04 00 00",      "456",     "0x456",    "0x04_56", "0x00_00_04_56" ] ],
    [ 0x07_89_AB, [ "AB 89 07", "AB 89 07",  "AB 89 07 00",    "789AB",   "0x789AB", "0x07_89_AB", "0x00_07_89_AB" ] ],
    [ 0xCD_EF_01, [ "01 EF CD", "01 EF CD",  "01 EF CD 00",   "CDEF01",  "0xCDEF01", "0xCD_EF_01", "0x00_CD_EF_01" ] ],
].forEach(([num, strs]) => {
    strs.forEach((str, i) => {
        if (
            num[hexOrder[i]] !== str ||
            str.dehexUint !== num
        ) {
            throw new Error("test failed");
        }
    });
});

[NaN, Infinity, -Infinity, -5, 0.99, -0.99].forEach(invalidNum => {
    hexOrder.forEach(method => {
        let threw = false;
        try { invalidNum[method]; } catch (error) { threw = true; };
        if (!threw) throw new Error("test failed");
    });
});

// dehexUintAob

[
    [ "",               [ ] ],
    [ "01",             [ 0x01 ] ],
    [ "23",             [ 0x23 ] ],
    [ "4567",           [ 0x45, 0x67 ] ],
    [ "89 AB",          [ 0x89, 0xAB ] ],
    [ " Cd eF ",        [ 0xCD, 0xEF ] ],
    [ " 0123 ",         [ 0x01, 0x23 ] ],
    [ " 0123 45 ",      [ 0x01, 0x23, 0x45 ] ],
    [ " 0123 45  67 ",  [ 0x01, 0x23, 0x45, 0x67 ] ],
].forEach(([str, expectation]) => {
    const parsed = str.dehexUintAob;
    if (
        parsed.length !== expectation.length ||
        parsed.some((e, i) => e !== expectation[i])
    ) {
        throw new Error("test failed");
    }
});

[
    " ",
    "0", "123", "1 23 45", "12 3 45", "12 34 5",
    "0x00", "0x00_01", "0x123", "0x01_23",
    "??", "?? 42", "42 ??",
].forEach(invalidStr => {
    let threw = false;
    try { invalidStr.dehexUintAob; } catch (error) { threw = true; };
    if (!threw) throw new Error("test failed");
});

// aobLength

[
    [ "",               0 ],
    [ "01",             1 ],
    [ "23",             1 ],
    [ "4567",           2 ],
    [ "89 AB",          2 ],
    [ " Cd eF ",        2 ],
    [ " 0123 ",         2 ],
    [ " 0123 45 ",      3 ],
    [ " 0123 45  67 ",  4 ],
    [ " 0123 ??  67 ",  4 ],
    [ " ???? 45  ?? ",  4 ],
].forEach(([str, expectation]) => {
    const parsed = str.aobLength;
    if (str.aobLength !== expectation) {
        throw new Error("test failed");
    }
});

[
    " ",
    "0", "123", "1 23 45", "12 3 45", "12 34 5",
    "0x00", "0x00_01", "0x123", "0x01_23",
].forEach(invalidStr => {
    let threw = false;
    try { invalidStr.aobLength; } catch (error) { threw = true; };
    if (!threw) throw new Error("test failed");
});

// Array

if (
    [            ].asAobStr     !== ""      ||
    [ 0x01, 0x9A ].asAobStr     !== "01 9A" ||
    [ 0x01, 0x9A ].asFlatAobStr !== "019A"
) {
    throw new Error("test failed");
}

/*

tools.createWalkOrder(
    [
        // no parents

        { id: "1.1 | p", parents: [] },

        // 2-link a

        { id: "2.1 | p",  parents: []          },
        { id: "2.2 | pp", parents: ["2.1 | p"] },

        // 2-link b

        { id: "3.1 | pp", parents: ["3.2 | p"] },
        { id: "3.2 | p",  parents: []          },

        // 3-link a

        { id: "4.1 | p",   parents: []           },
        { id: "4.2 | pp",  parents: ["4.1 | p"]  },
        { id: "4.3 | ppp", parents: ["4.2 | pp"] },

        // 3-link b

        { id: "5.1 | ppp", parents: ["5.2 | pp"] },
        { id: "5.2 | pp",  parents: ["5.3 | p"]  },
        { id: "5.3 | p",   parents: []           },

        // 2-link circular

        { id: "6.1 | 4p+k", parents: ["6.2 | 2p+k"] },
        { id: "6.2 | 2p+k", parents: ["6.1 | 4p+k"] },

        // 3-link circular

        { id: "7.1 | p",   parents: ["7.3 | pp6"] },
        { id: "7.2 | pp",  parents: ["7.1 | p"]   },
        { id: "7.3 | pp6", parents: ["7.2 | pp"]  },

        // branch a

        { id: "8.1 | p",  parents: [] },
        { id: "8.2 | pp", parents: ["8.1 | p"] },
        { id: "8.3 | pk", parents: ["8.1 | p"] },

        // branch b

        { id: "9.1 | pk", parents: ["9.3 | p"] },
        { id: "9.2 | pp", parents: ["9.3 | p"] },
        { id: "9.3 | p",  parents: [] },

        // 1-link circular

        { id: "10.1 | 4k", parents: ["10.1 | 4k"] },

        // double circular

        { id: "11.1 | p",   parents: ["11.2 | p6", "11.4 | pp6"] },
        { id: "11.2 | p6",  parents: ["11.1 | p"]                },
        { id: "11.3 | pp",  parents: ["11.1 | p"]                },
        { id: "11.4 | pp6", parents: ["11.3 | pp"]               },

        // branch merge a

        { id: "12.1 | p",    parents: [] },
        { id: "12.2 | pp",   parents: ["12.1 | p"] },
        { id: "12.3 | pk",   parents: ["12.1 | p"] },
        { id: "12.4 | ...p", parents: ["12.2 | pp", "12.3 | pk"] },

        // branch merge b

        { id: "13.1 | ...p", parents: ["13.3 | pp", "13.2 | pk"] },
        { id: "13.2 | pk",   parents: ["13.4 | p"] },
        { id: "13.3 | pp",   parents: ["13.4 | p"] },
        { id: "13.4 | p",    parents: [] },

    ],
    function* getParents(element, array) {
        for (const parentId of element.parents) {
            yield array.find(e => e.id === parentId);
        }
    },
).map(e => e.id).groupBy(e => e.split(".")[0])

*/

}());
