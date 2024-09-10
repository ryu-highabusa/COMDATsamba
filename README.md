# COMDAT samba
## (COMBO DATA)
Reverse engineering the "DEAD OR ALIVE" COMDAT File Format (character.bin)

Something I've been dancing with for a while (hence the "samba")




# Header data
DOA2 arcade file headers have 33 pointers; 

DOA2 console ports added an extra section (0x84) for simplified reversal inputs for a total of 34 pointers - (this pointer is nulled out in DOA4). 


Offset	|	Address	|	Length	|	Description	|
-----	|	-----	|	-----	|	-----	|
1	|	0x00	|	0x04	|	MOVE-DEFINITIONS	|
2	|	0x04	|	0x04	|	INPUT-DEFINITONS OFFSET TABLE	|
3	|	0x08	|	0x04	|	MOVE PROPERTIES (NORMAL, COUNTER, GUARD, CROUCHING, AIR, DAMAGE, FRAME DATA, OPEN-CLOSED STANCE)	|
4	|	0x0c	|	0x04	|	HOLDS DEFINITIONS (WHICH MOVE-DEF SLOT TO USE FOR EACH HOLD)	|
5	|	0x10	|	0x04	|	??	|
6	|	0x14	|	0x04	|	THROWS??	|
7	|	0x18	|	0x04	|	THROW POSITIONING / DAMAGE POINTERS	|
8	|	0x1c	|	0x04	|	HOLD POSITIONING / DAMAGE POINTERS	|
9	|	0x20	|	0x04	|	CHARACTER-SPECIFIC PROPERTY DEFINITIONS	|
10	|	0x24	|	0x04	|	??	|
11	|	0x28	|	0x04	|	??	|
12	|	0x2c	|	0x04	|	??	|
13	|	0x30	|	0x04	|	??	|
14	|	0x34	|	0x04	|	??	|
15	|	0x38	|	0x04	|	??	|
16	|	0x3c	|	0x04	|	??	|
17	|	0x40	|	0x04	|	??	|
18	|	0x44	|	0x04	|	??	|
19	|	0x48	|	0x04	|	??	|
20	|	0x4c	|	0x04	|	HITBOX DATA	|
21	|	0x50	|	0x04	|	FRAME DATA??	|
22	|	0x54	|	0x04	|	ANIM-DEF POINTER TABLE	|
23	|	0x58	|	0x04	|	PADDING	|
24	|	0x5c	|	0x04	|	??	|
25	|	0x60	|	0x04	|	??	|
26	|	0x64	|	0x04	|	??	|
27	|	0x68	|	0x04	|	??	|
28	|	0x6c	|	0x04	|	??	|
29	|	0x70	|	0x04	|	??	|
30	|	0x74	|	0x04	|	??	|
31	|	0x78	|	0x04	|	??	|
32	|	0x7c	|	0x04	|	??	|
33	|	0x80	|	0x04	|	??	|
34	|	0x84	|	0x04	|	CONSOLE HOLDS??	|





# Buttons

|	BUTTON	|	DOA2 Arcade + DC	|	DOA3 HEX	|	DOA2U HEX	|
|	-----	|	-----	|	-----	|	-----	|
|	LEFT	|	80	|	80	|	80	|
|	RIGHT	|	40	|	40	|	40	|
|	DOWN	|	10	|	10	|	10	|
|	UP	|	20	|	20	|	20	|
|	1	|	90	|	90	|	90	|
|	7	|	A0	|	A0	|	A0	|
|	3	|	50	|	50	|	50	|
|	9	|	60	|	60	|	60	|
|	PUNCH	|		|	8A 00	|	85 00	|
|	3P	|		|	8B 00	|	86 00	|
|	2P	|		|	8C 00	|	87 00	|
|	KICK	|		|	8D 00	|	88 00	|
|	3K	|		|	8E 00	|	89 00	|
|	2K	|		|	8F 00	|	8A 00	|
|	BACK-TURNED PUNCH	|		|	90 00	|	8B 00	|
|	BT 2P	|		|	91 00	|	8C 00	|
|	BT LONG 2P	|		|	92 00	|	8D 00	|
|	BACK-TURNED KICK	|		|	93 00	|	8E 00	|
|	BT 2K	|		|	94 00	|	8F 00	|
|	BT LONG 2K	|		|	95 00	|	90 00	|





# CREDITS AND THANKS
 Very little of the knowledge here is my own, I'm consolidating and building on top of the works of others and I am very grateful for everything they've shared. 

Shoutouts to 
### DEE4DOA
https://www.freestepdodge.com/threads/dead-or-alive-2-modding-tutorials-and-discussion.7039/#post-366830
https://www.freestepdodge.com/threads/dead-or-alive-3-custom-skins-costumes-thread.4698/post-366800


### USAGIZ
https://www.freestepdodge.com/threads/doa2-moveset-editing-project.3700/#post-136173
0x00 - "Offset 1 MOVE-DEF" https://www.freestepdodge.com/threads/doa2-moveset-editing-project.3700/post-255778
0x04 - "Offset 2 INPUT-DEF" https://www.freestepdodge.com/threads/doa2-moveset-editing-project.3700/page-9#post-255873
0x08 - "Offset 3 PROPERTY TABLE" https://www.freestepdodge.com/threads/doa2-moveset-editing-project.3700/post-255778
0x20 - "Offset 9 PROPERTY-DEF" https://www.freestepdodge.com/threads/doa2-moveset-editing-project.3700/post-255778
0x4c - "Offset 20 HITBOX DATA" https://www.freestepdodge.com/threads/doa2-moveset-editing-project.3700/post-367447
0x54 - "Animation-Definitions Offset Table" https://www.freestepdodge.com/threads/doa2-moveset-editing-project.3700/page-9#post-256764
Further Explanation of the Input-Def data chunk https://www.freestepdodge.com/threads/doa2-moveset-editing-project.3700/page-9#post-255873


### GULTIGARGAR
https://www.freestepdodge.com/threads/doa2-moveset-editing-project.3700/post-174567
https://www.freestepdodge.com/threads/doa2-moveset-editing-project.3700/post-174567
https://www.freestepdodge.com/threads/gultigargar-hacked-tengu-to-be-more-playable.7045/


### GANJUL
https://forum.xen-tax.com/viewtopic.php@p=64443.html#p64443 
DOAX XPR File Format 
DOAU XPR Cat Format 


### MARIOKART64N
DOAX XPR https://forum.xen-tax.com/viewtopic.php@p=64454.html#p64454
DOAX XPR  https://forum.xen-tax.com/viewtopic.php@p=64469.html#p64469
DOA2U XPR, MOT, WVA, CAT, DDS, AFS https://docs.google.com/spreadsheets/d/1ytNRzM8E-DMcTS_LXLPhQ0qLjpawKQHfT_lByftk_Yw/edit?gid=0#gid=0
DOA2U XPR Maxscript https://forum.xen-tax.com/viewtopic.php@p=64541.html#p64541
DOA4 TPR https://forum.xen-tax.com/viewtopic.php@f=18&t=2205.html
APA Controls https://forum.xen-tax.com/viewtopic.php@p=65346.html#p65346


### CHRROX
DOA5 LNK QuickBMS Script https://forum.xen-tax.com/viewtopic.php@p=69792.html#p69792


### B0NY
DOAO Blender Export Script https://forum.xen-tax.com/viewtopic.php@p=80112.html#p80112
tecmo360texturesExtractor.py https://forum.xen-tax.com/viewtopic.php@p=84432.html#p84432
tecmo360texturesExtractor VERSION 1.2 https://forum.xen-tax.com/viewtopic.php@p=84675.html#p84675


### ZAYKHO
DOA5 - Tool v2.5 https://forum.xen-tax.com/viewtopic.php@p=85945.html#p85945
