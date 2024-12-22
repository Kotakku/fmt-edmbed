# fmt-embedded
Port of the {fmt} library to embedded system.

# 開発環境
- STM32CubeIDE (GNU Tools for STM32(11.3rel1))
- Nucleo F446RE
- -std=gnu++20

# 使い方
プロジェクトのルートディレクトリにこのリポジトリを配置
```
git submodule add https://github.com/Kotakku/fmt-embedded/
```

プロジェクトのプロパティから`C/C++ General` -> `Paths and Symbols` を開き、Languages から `GNU C++` を選択したあと、`プロジェクトルート/fmt-embedded/include`をInlucdeに追加


# ライセンス
このライブラリには、MIT Licenseに基づく[{fmt}](https://github.com/fmtlib/fmt)が含まれています。