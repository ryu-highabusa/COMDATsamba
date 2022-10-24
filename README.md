# COMDAT samba
## (COMBO DATA)
Reverse engineering the "DEAD OR ALIVE" COMDAT File Format (character.bin)


# Header data

Address	|	Length	|	Description	|
-----	|	-----	|	-----	|
0x00	|	0x04	|	MOVE-DEFINITIONS	|
0x04	|	0x04	|	INPUT-DEFINITONS OFFSET TABLE	|
0x08	|	0x04	|	MOVE PROPERTIES (NORMAL, COUNTER, GUARD, CROUCHING, AIR, DAMAGE, FRAME DATA, OPEN or CLOSED STANCE)	|
0x0c	|	0x04	|	HOLD DEFINITIONS (WHICH MOVE-DEF SLOT TO USE FOR EACH HOLD)	|
0x10	|	0x04	|	???	|
0x14	|	0x04	|	THROWS?	|
0x18	|	0x04	|	THROW POSITIONING / DAMAGE POINTERS	|
0x1c	|	0x04	|	HOLD POSITIONING / DAMAGE POINTERS	|
0x20	|	0x04	|	CHARACTER-SPECIFIC PROPERTY DEFINITIONS	|
0x24	|	0x04	|		|
0x28	|	0x04	|		|
0x2c	|	0x04	|		|
0x30	|	0x04	|		|
0x34	|	0x04	|	???	|
0x38	|	0x04	|	???	|
0x3c	|	0x04	|	???	|
0x40	|	0x04	|	???	|
0x44	|	0x04	|	???	|
0x48	|	0x04	|	???	|
0x4c	|	0x04	|	???	|
0x50	|	0x04	|	???	|
0x54	|	0x04	|	ANIM-DEF POINTER TABLE	|
0x58	|	0x04	|	PADDING	|
0x5c	|	0x04	|	???	|
0x60	|	0x04	|	???	|
0x64	|	0x04	|	???	|
0x68	|	0x04	|	???	|
0x6c	|	0x04	|	???	|
0x70	|	0x04	|	???	|
0x74	|	0x04	|	???	|
0x78	|	0x04	|	???	|
0x7c	|	0x04	|	???	|
0x80	|	0x04	|	???	|
0x84	|	0x04	|	“CONSOLE HOLDS”	|


# Character IDs




# CREDITS AND THANKS
 Very little of the knowledge here is my own, I'm building on top of the works of others and I am very grateful for everything they've shared. 

Shoutouts to 
### DEE4DOA
https://www.freestepdodge.com/threads/dead-or-alive-2-modding-tutorials-and-discussion.7039/#post-366830
https://www.freestepdodge.com/threads/dead-or-alive-3-custom-skins-costumes-thread.4698/post-366800
### USAGIZ
https://www.freestepdodge.com/threads/doa2-moveset-editing-project.3700/#post-136173
### GULTIGARGAR
https://www.freestepdodge.com/threads/doa2-moveset-editing-project.3700/post-174567
https://www.freestepdodge.com/threads/gultigargar-hacked-tengu-to-be-more-playable.7045/