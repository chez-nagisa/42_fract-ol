# fract-ol  

`fract-ol` is a 42 graphics project that focuses on rendering fractals using the MiniLibX graphics library.  
The goal is to create an interactive fractal viewer that can display and zoom into various types of fractals such as the Mandelbrot and Julia sets.

## 🎯 Features

- Mandelbrot set
- Julia set
- (Optional/bonus) Burning Ship fractal
- Zoom in/out with mouse and keyboard
- Navigation with arrow keys
- Real-time parameter adjustment for Julia

## 🧠 What I Learned

- How fractals are generated mathematically
- Complex numbers and iterative functions
- Image rendering using MiniLibX
- Event handling (keyboard, mouse)
- Performance optimization and pixel plotting

## 🛠 Requirements

- `MiniLibX` is required. Clone it into your project directory:
```bash
git clone https://github.com/42Paris/minilibx-linux.git
```

## 🧪 How to Use

```bash
# 1. Build the project
make

# 2. Run with one of the supported sets:
./fractol mandelbrot
./fractol julia
./fractol julia 0.285 0.01   # Optional: custom Julia parameters
./fractol burningship

# 3. Controls
- Zoom: Mouse scroll
- Move: Arrow keys
- Exit: ESC key
```

---

# fract-ol（日本語）

`fract-ol` は、MiniLibX を使って**フラクタルを描画する**42のグラフィックス系プロジェクトです。  
複素数を用いた数式を繰り返し演算し、その結果をもとに画像を描画していきます。

## 🎯 機能

- Mandelbrot集合の描画
- Julia集合の描画
- （ボーナス）Burning Shipなどの他のフラクタル
- マウスとキーボードでのズームイン／アウト
- 矢印キーでの移動
- Juliaのパラメータを実行時に変更可能

## 🧠 学んだこと

- フラクタルの数学的生成手法  
- 複素数とその反復関数の扱い  
- MiniLibXを使った画像描画の基礎  
- キーボード・マウス入力のイベント処理  
- ピクセル単位での描画最適化とパフォーマンス管理

## 🛠 必要環境

- プロジェクトディレクトリ内に `minilibx` をクローンしてください：
```bash
git clone https://github.com/42Paris/minilibx-linux.git
```

## 🧪 使い方

```bash
# 1. makeでビルド
make

# 2. 以下のように実行（セット名は必須）
./fractol mandelbrot
./fractol julia
./fractol julia 0.285 0.01   # 実数・虚数パラメータ指定も可能
./fractol burningship

# 3. 操作方法
- ズーム：マウスホイール
- 移動：矢印キー
- 終了：ESCキー
```
