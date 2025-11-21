# DOA2M Naomi Memory Addresses

## Unlock Flags
`EN` Memory flags controlling unlockable features.

`JP` 解除可能なゲーム要素を制御するメモリフラグ。
| Flag Address | Label                          | Description                                                   |
| ------------ | ------------------------------ | ------------------------------------------------------------- |
| `0x0c2563f4` | `Unlock_Flag_ArcadeModeUNUSED` | Does not appear on menu; loads leftover `Arcade Mode` from DOA1 if only flag enabled |
| `0x0c2563f5` | `Unlock_Flag_Story`            | Enables `Story Mode` selection                                  |
| `0x0c2563f6` | `Unlock_Flag_Tag`              | Enables `Tag Mode` selection                                    |
| `0x0c2563f7` | `Unlock_Flag_Time`             | Enables `Time Attack` Mode selection                            |
| `0x0c2563f8` | `Unlock_Flag_Survival`         | Enables `Survival Mode` selection                               |

## `ILLEGAL_CHARACTER_LIST`
 `EN` Patch any address below with FF to bypass character lockout restrictions.
 
 `JP` 下記のアドレスを`FF`に書き換えると、キャラクター選択制限を解除できます。
| Address | ID (Hex) | Label | Notes | 
| -----| ----- | ----- | ----- | 
| `0x0c1550cb` | `0x0a` | `HELENA_MAM` | |
| `0x0c1550cc` | `0x0b` | `RAIDOU` | |
| `0x0c1550cd` | `0x0f` | `INDIAN_BELLY_DANCER` | | 
| `0x0c1550ce` | `0x12` | `CoTINA` | |
| `0x0c1550cf` | `0x13` | `BERSERK` | |
| `0x0c1550d0` | `0x14` | `RIVAL` | |
| `0x0c1550d1` | `0x15` | `GENRA` | |
| `0x0c1550d2` | `0x16` | `BOSS` | |

## `CHARACTER_SELECT`
`EN` Main playable character IDs.

`JP` 選択可能なキャラクターID一覧。
| Address | ID (Hex) | Label | Notes | 
| -----| ----- | ----- | ----- | 
| `0x0c1550d3` | `0x05` | `KASUMI` | | 
| `0x0c1550d4` | `0x06` | `GENFU` | |
| `0x0c1550d5` | `0x01` | `TINA` | |
| `0x0c1550d6` | `0x00` | `ZACK` | |
| `0x0c1550d7` | `0x02` | `JANNLEE` | |
| `0x0c1550d8` | `0x0d` | `AYANE` | |
| `0x0c1550d9` | `0x04` | `HAYABUSA` | |
| `0x0c1550da` | `0x07` | `HELENA` | |
| `0x0c1550db` | `0x09` | `BASS` | | 
| `0x0c1550dc` | `0x08` | `LEON` | |
| `0x0c1550dd` | `0x0c` | `LEIFANG` | |
| `0x0c1550de` | `0x03` | `EIN` | |



## Passwords 
`EN` Password strings and their corresponding game effects.

`JP` パスワード文字列と対応する効果。
| Address | Password String | Byte String| Description |
| ----- | ----- | ----- | ----- |
| `0x0c214eac` | `TOMONOBU` | `54 4f 4d 4f 4e 4f 42 55 00` | |
| `0x0c214eb5` | `LOVE?   ` | `4c 4f 56 45 3f 20 20 20 00` | `Tag Mode` Password |
| `0x0c214ebe` | `MIRAI   ` | `4d 49 52 41 49 20 20 20 00` | `Survival Mode` Password |
| `0x0c214ec7` | `KATUNORI` | `4b 41 54 55 4e 4f 52 49 00` | |
| `0x0c214ed0` | `ALLCLEAR` | `41 4c 4c 43 4c 45 41 52 00` |  |
