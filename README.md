# COMDAT samba
## (COMBO DATA)
Reverse engineering the "DEAD OR ALIVE" COMDAT File Format (character.bin)
Something I've been dancing with for a while (hence the ~samba~)




# Header data
File headers are 33 or 34 pointers

Address	|	Length	|	Offset	|	Description	|
-----	|	-----	|	-----	|	-----	|
0x00	|	0x04	|	1	|	MOVE-DEFINITIONS	|
0x04	|	0x04	|	2	|	INPUT-DEFINITONS OFFSET TABLE	|
0x08	|	0x04	|	3	|	MOVE PROPERTIES (NORMAL,COUNTER,GUARD,CROUCHING,AIR, DAMAGE, FRAME DATA,OPEN/CLOSED STANCE)	|
0x0c	|	0x04	|	4	|	HOLDS DEFINITIONS (WHICH MOVE-DEF SLOT TO USE FOR EACH HOLD)	|
0x10	|	0x04	|	5	|	??	|
0x14	|	0x04	|	6	|	THROWS??	|
0x18	|	0x04	|	7	|	THROW POSITIONING / DAMAGE POINTERS	|
0x1c	|	0x04	|	8	|	HOLD POSITIONING / DAMAGE POINTERS	|
0x20	|	0x04	|	9	|	CHARACTER-SPECIFIC PROPERTY DEFINITIONS	|
0x24	|	0x04	|	10	|	??	|
0x28	|	0x04	|	11	|	??	|
0x2c	|	0x04	|	12	|	??	|
0x30	|	0x04	|	13	|	??	|
0x34	|	0x04	|	14	|	??	|
0x38	|	0x04	|	15	|	??	|
0x3c	|	0x04	|	16	|	??	|
0x40	|	0x04	|	17	|	??	|
0x44	|	0x04	|	18	|	??	|
0x48	|	0x04	|	19	|	??	|
0x4c	|	0x04	|	20	|	HITBOX DATA	|
0x50	|	0x04	|	21	|	FRAME DATA??	|
0x54	|	0x04	|	22	|	ANIM-DEF POINTER TABLE	|
0x58	|	0x04	|	23	|	PADDING	|
0x5c	|	0x04	|	24	|	??	|
0x60	|	0x04	|	25	|	??	|
0x64	|	0x04	|	26	|	??	|
0x68	|	0x04	|	27	|	??	|
0x6c	|	0x04	|	28	|	??	|
0x70	|	0x04	|	29	|	??	|
0x74	|	0x04	|	30	|	??	|
0x78	|	0x04	|	31	|	??	|
0x7c	|	0x04	|	32	|	??	|
0x80	|	0x04	|	33	|	??	|
0x84	|	0x04	|	34	|	CONSOLE HOLDS??	|



# Buttons

|	BUTTON	|	DOA2 Arcade + DC	|	DOA 3 HEX	|	DOA2U HEX	|
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
 Very little of the knowledge here is my own, I'm building on top of the works of others and I am very grateful for everything they've shared. 

Shoutouts to 
### DEE4DOA
https://www.freestepdodge.com/threads/dead-or-alive-2-modding-tutorials-and-discussion.7039/#post-366830

https://www.freestepdodge.com/threads/dead-or-alive-3-custom-skins-costumes-thread.4698/post-366800
### USAGIZ
https://www.freestepdodge.com/threads/doa2-moveset-editing-project.3700/#post-136173

0X00 - "Offset 1 MOVE-DEF" https://www.freestepdodge.com/threads/doa2-moveset-editing-project.3700/post-255778

0X04 - "Offset 2 INPUT-DEF" https://www.freestepdodge.com/threads/doa2-moveset-editing-project.3700/page-9#post-255873

0X08 - "Offset 3 PROPERTY TABLE" https://www.freestepdodge.com/threads/doa2-moveset-editing-project.3700/post-255778

0x4c - "Offset 20 HITBOX DATA" https://www.freestepdodge.com/threads/doa2-moveset-editing-project.3700/post-367447

0X54 - "Animation-Definitions Offset Table" https://www.freestepdodge.com/threads/doa2-moveset-editing-project.3700/page-9#post-256764

Further Explanation of the Input-Def data chunk https://www.freestepdodge.com/threads/doa2-moveset-editing-project.3700/page-9#post-255873


### GULTIGARGAR
https://www.freestepdodge.com/threads/doa2-moveset-editing-project.3700/post-174567

https://www.freestepdodge.com/threads/doa2-moveset-editing-project.3700/post-174567

https://www.freestepdodge.com/threads/gultigargar-hacked-tengu-to-be-more-playable.7045/