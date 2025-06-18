### DEAD OR ALIVE 2
### Build 2000-01-27 

### Memory Address Reference Table

#### ILLEGAL_CHARACTER_LIST 
| Address   | Value | Character Name        |
|-----------|-------|-----------------------|
| `8c14db4f`| `0B`  | RAIDOU                |
| `8c14db50`| `0F`  | INDIAN BELLY DANCER   |
| `8c14db51`| `12`  | CoTINA                |
| `8c14db52`| `13`  | BERSERK               |
| `8c14db53`| `14`  | RIVAL                 |
| `8c14db54`| `15`  | GENRA                 |
| `8c14db55`| `16`  | BOSS                  |

#### CHARACTER_SELECT_IDs_MULTIPLAYER 
| Address   | Value | Character Name        |
|-----------|-------|-----------------------|
| `8c14db56`| `05`  | KASUMI                |
| `8c14db57`| `06`  | GENFU                 |
| `8c14db58`| `01`  | TINA                  |
| `8c14db59`| `00`  | ZACK                  |
| `8c14db5a`| `02`  | JANNLEE               |
| `8c14db5b`| `0D`  | AYANE                 |
| `8c14db5c`| `04`  | HAYABUSA              |
| `8c14db5d`| `07`  | HELENA                |
| `8c14db5e`| `09`  | BASS                  |
| `8c14db5f`| `08`  | LEON                  |
| `8c14db60`| `0C`  | LEIFANG               |
| `8c14db61`| `03`  | EIN                   |

### DEFEAT CHARACTER BLOCK
Character `0F` is normally not selectable, but we can easily defeat her lockout by patching `8c14db50` with `FF`. 

### REPLACE CHARACTER SELECT SLOT
Then subsequently overwriting someone else's character select slot, such as Kasumi's at `8c14db56`, with `0F`.

### CRASH ON RENDER
Unfortunately the game freezes at the exact frame the character is supposed to render on screen.  [screenshot](https://raw.githubusercontent.com/ryu-highabusa/COMDATsamba/refs/heads/main/Sample/2000-01-27%20DOA2%20US%20Prototype%20RAMDUMP%20CHARACTER%200F%20INDIANBELLYDANCER%20CRASH.png)

### Ghidra Project and Crash RAM Dump
[Ghidra Project](https://github.com/ryu-highabusa/COMDATsamba/blob/main/Sample/2000-01-27_1ST_READ.bin.gzf)

[Crash RAM Dump](https://github.com/ryu-highabusa/COMDATsamba/blob/main/Sample/2000-01-27%20DOA2%20US%20Prototype%20RAMDUMP%20CHARACTER%200F%20INDIANBELLYDANCER%20CRASH.bin)

-----
| `Address` | `PTR_SKELETON_DATA` |    |
|-----|-----|-----|
| `8c17957c` | `SKELETON_DATA_ZACK` |    |
| `8c179580` | `SKELETON_DATA_TINA` |    |
| `8c179584` | `SKELETON_DATA_JANNLEE` |    |
| `8c179588` | `SKELETON_DATA_EIN` |    |
| `8c17958c` | `SKELETON_DATA_HAYABUSA` |    |
| `8c179590` | `SKELETON_DATA_KASUMI` |    |
| `8c179594` | `SKELETON_DATA_GENFU` |    |
| `8c179598` | `SKELETON_DATA_HELENA` |    |
| `8c17959c` | `SKELETON_DATA_LEON` |    |
| `8c1795a0` | `SKELETON_DATA_BASS` |    |
| `8c1795a4` | `SKELETON_DATA_DELETED` | `0xA HELENA MAM` |
| `8c1795a8` | `SKELETON_DATA_DELETED` | `0xB RAIDOU`  |
| `8c1795ac` | `SKELETON_DATA_LEIFANG` |    |
| `8c1795b0` | `SKELETON_DATA_AYANE` |    |
| `8c1795b4` | `SKELETON_DATA_DELETED` | `0xE WAKA BASS` |
| `8c1795b8` | `SKELETON_DATA_DELETED` | `0xF INDIA`  |
| `8c1795bc` | `SKELETON_DATA_DELETED` | `0x10 LORAN`  |
| `8c1795c0` | `SKELETON_DATA_TENGU` |    |
| `8c1795c4` | `SKELETON_DATA_DELETED` | `0x12 CoTINA`  |
| `8c1795c8` | `SKELETON_DATA_DELETED` | `0x13 BERSERK`  |
| `8c1795cc` | `SKELETON_DATA_DELETED` | `0x14 RIVAL`  |
| `8c1795d0` | `SKELETON_DATA_DELETED` | `0x15 GENRA`  |
| `8c1795d4` | `SKELETON_DATA_DELETED` | `0x16 BOSS`  |
| `8c1795d8` | `SKELETON_DATA_DELETED` |    |
-----

### DEAD OR ALIVE 2
### ビルド 2000-01-27 

### メモリアドレス参照表

#### 非選択可能キャラクターリスト 
| アドレス    | 値    | キャラクター名         |
|-----------|-------|-----------------------|
| `8c14db4f`| `0B`  | 雷道                  |
| `8c14db50`| `0F`  | インドのベリーダンサー      |
| `8c14db51`| `12`  | 子供の頃のティナ         |
| `8c14db52`| `13`  | バーサーク              |
| `8c14db53`| `14`  | ライバル                |
| `8c14db54`| `15`  | 幻羅                 |
| `8c14db55`| `16`  | ボス                  |

#### マルチプレイヤー選択可能キャラクターID 
| アドレス    | 値    | キャラクター名         |
|-----------|-------|-----------------------|
| `8c14db56`| `05`  | かすみ                |
| `8c14db57`| `06`  | ゲン・フー                 |
| `8c14db58`| `01`  | ティナ                  |
| `8c14db59`| `00`  | ザック                  |
| `8c14db5a`| `02`  | ジャン・リー               |
| `8c14db5b`| `0D`  | あやね                 |
| `8c14db5c`| `04`  | リュウ・ハヤブサ            |
| `8c14db5d`| `07`  | エレナ                |
| `8c14db5e`| `09`  | バース                  |
| `8c14db5f`| `08`  | レオン                  |
| `8c14db60`| `0C`  | レイファン               |
| `8c14db61`| `03`  | アイン                    |

### キャラクターブロック解除
通常は選択不可能なキャラクター`0F`ですが、`8c14db50`を`FF`でパッチすることでロックを解除できます。

### キャラクター選択スロットの書き換え
続いて、かすみのスロット(`8c14db56`)など既存キャラクターのスロットを`0F`で上書きします。

### レンダリング時のクラッシュ
残念ながら、キャラクターが画面上に表示されるべきフレームでゲームがフリーズします。[スクリーンショット](https://raw.githubusercontent.com/ryu-highabusa/COMDATsamba/refs/heads/main/Sample/2000-01-27%20DOA2%20US%20Prototype%20RAMDUMP%20CHARACTER%200F%20INDIANBELLYDANCER%20CRASH.png)

### Ghidraプロジェクトとクラッシュ時RAMダンプ
[Ghidraプロジェクト](https://github.com/ryu-highabusa/COMDATsamba/blob/main/Sample/2000-01-27_1ST_READ.bin.gzf)

[クラッシュ時RAMダンプ](https://github.com/ryu-highabusa/COMDATsamba/blob/main/Sample/2000-01-27%20DOA2%20US%20Prototype%20RAMDUMP%20CHARACTER%200F%20INDIANBELLYDANCER%20CRASH.bin)