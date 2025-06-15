### DEAD OR ALIVE 2
### Build 2000-01-27 

### Memory Address Reference Table

#### ILLEGAL_CHARACTER_LIST `XREF[1]: 8c02a89c(*)`
| Address   | Value | Character Name        |
|-----------|-------|-----------------------|
| `8c14db4f`| `0B`  | RAIDOU                |
| `8c14db50`| `0F`  | INDIAN BELLY DANCER   |
| `8c14db51`| `12`  | CoTINA                |
| `8c14db52`| `13`  | BERSERK               |
| `8c14db53`| `14`  | RIVAL                 |
| `8c14db54`| `15`  | GENRA                 |
| `8c14db55`| `16`  | BOSS                  |

#### CHARACTER_SELECT_IDs_MULTIPLAYER `XREF[1]: 8c022aa0(*)`
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

---

### DEAD OR ALIVE 2
### ビルド 2000-01-27 

### メモリアドレス参照表

#### 非選択可能キャラクターリスト `XREF[1]: 8c02a89c(*)`
| アドレス    | 値    | キャラクター名         |
|-----------|-------|-----------------------|
| `8c14db4f`| `0B`  | 雷道                  |
| `8c14db50`| `0F`  | インドのベリーダンサー      |
| `8c14db51`| `12`  | 子供の頃のティナ         |
| `8c14db52`| `13`  | バーサーク              |
| `8c14db53`| `14`  | ライバル                |
| `8c14db54`| `15`  | 幻羅                 |
| `8c14db55`| `16`  | ボス                  |

#### CHARACTER_SELECT_IDs_MULTIPLAYER `XREF[1]: 8c022aa0(*)`
| Address   | Value | Character Name        |
|-----------|-------|-----------------------|
| `8c14db56`| `05`  | かすみ                |
| `8c14db57`| `06`  | ゲン・フー                 |
| `8c14db58`| `01`  | ティナ                  |
| `8c14db59`| `00`  | ザック                  |
| `8c14db5a`| `02`  | ジャン・リー               |
| `8c14db5b`| `0D`  | あやね                 |
| `8c14db5c`| `04`  | リュウ・ハヤブサ/隼 龍              |
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