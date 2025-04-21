# C Make Starter: シーザー暗号

## 🔧 内容

このプロジェクトは、C言語でシーザー暗号を使った簡単な暗号化ツールです。  
Makefileを使ってビルド・デバッグ・テストを管理できます。

## 📂 ディレクトリ構成

```
.
├── Makefile
├── include/         ヘッダファイル
├── src/             ソースコード
├── test/            テストコード（CUnit）
├── output/bin/      実行バイナリ出力先
└── .gitignore
```

## 🚀 使い方

### ビルドして実行

```bash
make
./output/bin/app
```

### デバッグ用にビルド

```bash
make debugbuild
```

### テスト実行

```bash
make debug-test
./output/bin/test_runner
```

### クリーンアップ

```bash
make clean
```

## 🧪 依存パッケージ

- CUnit（Ubuntuでは `sudo apt install libcunit1-dev`）
