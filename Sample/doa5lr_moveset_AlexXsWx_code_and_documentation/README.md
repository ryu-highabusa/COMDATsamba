# Free Step Dodge link

[Link](https://www.freestepdodge.com/threads/moveset-bin-format-structure-a-bit-more.8886/)  

# Disclaimer

This is a work in progress. It's all quick & dirty, migit be incomplete and innaccurate in some places, and not very well documented.  

# Contents of this repo

## Main focus

* Moveset `*.bin` files extracted from Dead or Alive 5: Last round, as of versions 1.02a (steam) and 1.10c (steam)  
* Few motion files for example (the ones that contain actual animations)  
* Code to extract those bins from game files (but you can already do that with the [Archive Tool](https://www.freestepdodge.com/threads/modding-utilities-apps-thread.6328/))
* Code to partially parse those bins for analysis from a javascript console, _tested mainly for v1.02a Rig_  
* Code to generate `*.hsl` markup for those bins, for use in Hexworkshop (e.g. [v6.8](http://www.bpsoft.com/bbl/download/download.html?dlfile=hw_v680.exe))  
* Code to analyze parsed bins
* Code to modify bins (including insert/removal of data) _but not putting those bins back into the game_  
* Overall helper code to analyze binary data  

## Side projects

* Code to dechunkify reads reported by [procmon](https://docs.microsoft.com/en-us/sysinternals/downloads/procmon) `*.xml`  
* Code to unpack replays (v1.02a; does not include parsing) and repack them without compression  
* Code to extract bookmarks information from Hexworkshop's `*.hbk` files  

## More info

See respective files from the `documentation/` folder.  

# Installation

The code is designed to be executed in browser (e.g. Google Chrome), with extensive use of browser's developer tools / js console.  

Some parts of the code were complicated enough to opt in for Typescript, which requires transpilation & bundling (browserify) before it can be used in browser. For that the project uses `node.js` (e.g. v8.17.0) to run js code outside browser, `npm` (e.g. v5.8.0) to install modules like typescript transpiler, and the modules like typescript transpiler.  

Once you have node.js and npm, you can install modules using command `npm install` (requires internet connection; driven by `package.json`).  

After that you can process `*.ts` files (typescript) using command `npm run compile` (defined in `package.json`), which will make them available from `base.html`.  

# Running

1. Open `base.html` in browser (preferably Google Chrome, other browsers should work too but weren't tested)  
2. Select desired mode  
3. Open browser's console / developer tools (e.g. `F12` in Chrome)  
4. Depending on selected mode, you can drag-n-drop different kind of files onto main page (not the console), and have access to some js functions / extenstions.  