DOA4 TPRxtractor
Release Date: nov10/07
by Voltthorn
visit: http://darkmatter.de-coder.net/






Credits:
Voltthorn - Programmer
Alessi - Format Cracker
Mario_Kart64n - Me, I solved the deswizzler the poor mans way
Intruder - Intially converted my paint scripts
grap3 - helped beta test, among helping in other areas
Anyone Else - thanks a bunch for advise and for reviwing formats for me


WARNING! WARNING! WARNING! WARNING! WARNING! WARNING! 
------------------------------------------------------
First things first, this tools a beta, crashes alot and doesn't work on some image sizes/dimensions, or new formats. also please do not expect any Updates or fixes
------------------------------------------------------
WARNING! WARNING! WARNING! WARNING! WARNING! WARNING!




INSTRUCTIONS
------------------------------------------------------
-Only Supports *.TPR files; these include Character or Level Files
-Model Extraction is supported for DOA4 ONLY. *Read Note1 for
-Imports/Exports Textures of the same dimensions and compression
-Supported Texture Compressions are; DXt1, DXt3, DXt5, ARGB32
-Does NOT support model injection


You need an ISO of your game disc, DOA4 for example. Easiest way is to
just go download the 6GB ISO off any torrent site. 

use wx360.exe from the site below to open the ISO/extract the contents from it.
DOA4 = chr.af
Doax2= chrone.afs
http://gael360.free.fr/

use AFSexplorer, to extract TPR files from it. 
http://files.filefront.com/AFS+Explorer+37rar/;8833043;/fileinfo.html

be aware some files may have there extension cut off like aya00
you'll have to extract it and rename it to aya00.tpr when you extract it

Heres a list of files names to character names
alpXX.tpr Alpha
ayaXX.tpr Ayane
basXX.tpr Bass
bayXX.tpr Bayman
boyXX.tpr Eliot
braXX.tpr Brad
criXX.tpr Christie
einXX.tpr Ein
genXX.tpr Genfu
hakXX.tpr Kokoro
helXX.tpr Helena
hytXX.tpr Hayate
janXX.tpr Jannlee
kasXX.tpr Kasumi
korXX.tpr Hitomi
leiXX.tpr Leifang
leoXX.tpr Leon
lisXX.tpr Lisa
rtmXX.tpr Misc charaters.
...00: Old Merchant
...01: Anastasia (Helena's Mother)
...02: Announcer
...03: Roland (Leon's Wife)
...04: Doax2 Fan
ryuXX.tpr Hayabusa
spaXX.tpr Spartan 458 (halo chick nicole)
tinXX.tpr Tina
tngXX.tpr Tengu
zacXX.tpr Zack


TPRextractor has 3 functions
"http://i19.tinypic.com/6x60aqx.gif"
-Extract Texture 
-Inject Texture
-Extract Models (3DMax Required)
*note you should install dds plugins for thumbnail viewing and for editing


EXTRACT TEXTURE
------------------------------------------------------
to extract an image select a name from the Left panel, so that it displays in the right image window. In this case you can see I've highlighted something called DXT1. this means you can only import a DXT1 DDS texture back to this spot. also remember you cannot modify the dimension size, so don't inject anything with a different dimension then that of what your extracting.

Now once you've selected an image, and the extractor hasn't crashed yet LoL ^_^ press the "Rip texture" button at the far right. and make sure to rename the output to something with .dds at the end. example save as texture06.dds

then for editing the texture, open it with a prog like paintshop pro or photoshopCS. you may need to install a DDS image plugin if dds isn't already supported 
http://developer.nvidia.com/object/photoshop_dds_plugins.html


INJECT TEXTURE
------------------------------------------------------
the injection button is at the lower left side "Inject"

now when saving back remember it has to be saved as whatever that slot says. like DXT1 or DXT3... these are just save options when your saving from paint or photoshop


Extract Models
------------------------------------------------------
The to mid section panels are used for models they are VertexBuffers "VBUF" and IndexBuffers "IBUF" in order to get one mesh you need to connect the correct the IBUF with the correct VBUF.

but as you notice there are more VBUF files then IBUF files. this is because there are morph targets being kept in the VBUFs. but we don't need them, and they make connecting the correct IBUF to VBUF difficult.

Though if you follow my rule, you should have no problem. you'll notice in the left column there are more VBUFS then IBUfs, yea. well you'll also notice that the morphs follow after the VBUF, and you can clearly see this by the outout size.

btw the IBUF and VBUFs are displayed using there size, for this very reason.

so what you want to do is if there are 2 duplicated sizes of the same IBUF, skip them, and connect the next IBUV to the next VBUF with a different size. I'll show you what i would match up to extract a mesh.

i'll also enforce whats written on the app

"SELECT A VBUF AND AN IBUF THEN RIP" > so you must match up one ibuf to one vbuf and press the rip button, it'll save a file called test.3d. I'll explain how to use the import script for importing the test.3d files a bit later below

Anyway here is what i would match up to produce one mesh, keep in mind that I'm skipping duplicated vbufs
VBUF 0 - 44064  //  IBUF 0 - 4640 = mesh00
[i]...skip vbuf 01, 02, same size equals duplicate[/i]
VBUF 3 - 32768  //  IBUF 1 - 3248 = mesh01
[i]...skip vbuf 04, 05, same size equals duplicate[/i]
VBUF 6 - 35968  //  IBUF 2 - 3408 = mesh02
VBUF 7 - 5184  //  IBUF 3 - 608 = mesh03
VBUF 8 - 7712  //  IBUF 4 - 832 = mesh04

so on, so on. you'll easily see the duplicates as they're always 2 that follow, so like group of 3's there not hard to spot.

anyway now that you understand that the ibuv and vbuf must be connected. connect one and press rip.

the app will save a file called test.3d in the same directory as the TPRextractor program. you should also have the script in the same directory, but you need to configure the MaxScript to use it.

now moving onto importing the models; btw you NEED 3dmax!!!
its an import script for 3dmax, so you can only use 3dmax. i believe all versions of 3dmax work with the script.

So open 3dmax, and go at the top MaxScript, and goto Open Script... find doa4import.ms that should be in the same directory as TPRxtract.exe. once you've opened doa4import.ms a text editor should pop up in 3dmax.

you'll meed to edit this first line
f = fopen "C:\\DOAMODELS\\DOA4\\test.3d" "rb"

change that path in the quotes "C:///....." to where ever your test.3d is.. just remember to use double slashes \\ .. i'm not sure why 3dmax uses these, but only using single slashes doesn't work. also if your wondering how to find the path of the file. find the file first right click it, and goto properties, windows will show you the complete path of the file. you should be able to highlight it like text and press CTRL + C to copy the text. the go back to your MaxScript editor and paste that in. being mindful of the double slashes \\

once you've configured this, save the script. then select all text in the ediot, and drag and drop the text from the MaxScript Editor. drop this next to the pointer button at the top, where your move, rotate, and move bottons are. this will create a script shortcut. now you can press this button and the script will run, and act as our test.3d importer ^_^ ..so yeah press the button, and it should import the mesh you've RIP'd

pretty cool eh! 

keep in mind, this is still in beta phase, so you have to assign the materials back to the texture when you import it onto 3dmax. you can do this by extracting a DDS image using the TPRextractor, then drag and drop the texture onto the mesh part in 3dmax. it works as a quite fix, but you may need to assign multiple textures to one mesh. to do this, enter polygon mode and highlight the part of the mesh you want to assign a seperate texture to. then simply drag and drop another texture to is.




Final Thoughts/Contact Info
------------------------------------------------------
..well i think thats the end of my very long explainatation. i feel its still difficult to understand, i was very wordy, so if any question. just fire away, I'll try yo solve them.

please Private Message me or one of the authors at my forum;
http://darkmatter.de-coder.net/


-mariokart64n ^_^