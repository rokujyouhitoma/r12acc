# Learn C compiler

 - [低レイヤを知りたい人のためのCコンパイラ作成入門](https://www.sigbus.info/compilerbook)
 - [コンパイラ作りのススメ - sukesan1984](https://scrapbox.io/sukesan1984/%E3%82%B3%E3%83%B3%E3%83%91%E3%82%A4%E3%83%A9%E4%BD%9C%E3%82%8A%E3%81%AE%E3%82%B9%E3%82%B9%E3%83%A1)

# TODO List

 - [x] [機械語とアセンブラ](https://www.sigbus.info/compilerbook#%E6%A9%9F%E6%A2%B0%E8%AA%9E%E3%81%A8%E3%82%A2%E3%82%BB%E3%83%B3%E3%83%96%E3%83%A9)
   - [x] [CPUとメモリ](https://www.sigbus.info/compilerbook#cpu%E3%81%A8%E3%83%A1%E3%83%A2%E3%83%AA)
     - PC: program counter
     - IP: instruction pointer
     - ISA: instruction set architecture
   - [x] [アセンブラとは](https://www.sigbus.info/compilerbook#%E3%82%A2%E3%82%BB%E3%83%B3%E3%83%96%E3%83%A9%E3%81%A8%E3%81%AF)
     - `objdump -d /bin/ls`
     - `man objdump`
   - [x] [Cとそれに対応するアセンブラ](https://www.sigbus.info/compilerbook#c%E3%81%A8%E3%81%9D%E3%82%8C%E3%81%AB%E5%AF%BE%E5%BF%9C%E3%81%99%E3%82%8B%E3%82%A2%E3%82%BB%E3%83%B3%E3%83%96%E3%83%A9)
 - [x] [電卓レベルの言語の作成](https://www.sigbus.info/compilerbook#%E9%9B%BB%E5%8D%93%E3%83%AC%E3%83%99%E3%83%AB%E3%81%AE%E8%A8%80%E8%AA%9E%E3%81%AE%E4%BD%9C%E6%88%90)
   - [x] [ステップ1：整数1個をコンパイルする言語の作成](https://www.sigbus.info/compilerbook#%E3%82%B9%E3%83%86%E3%83%83%E3%83%971%E6%95%B4%E6%95%B01%E5%80%8B%E3%82%92%E3%82%B3%E3%83%B3%E3%83%91%E3%82%A4%E3%83%AB%E3%81%99%E3%82%8B%E8%A8%80%E8%AA%9E%E3%81%AE%E4%BD%9C%E6%88%90)
   - [x] [ステップ2：加減算のできるコンパイラの作成](https://www.sigbus.info/compilerbook#%E3%82%B9%E3%83%86%E3%83%83%E3%83%972%E5%8A%A0%E6%B8%9B%E7%AE%97%E3%81%AE%E3%81%A7%E3%81%8D%E3%82%8B%E3%82%B3%E3%83%B3%E3%83%91%E3%82%A4%E3%83%A9%E3%81%AE%E4%BD%9C%E6%88%90)
   - [x] [ステップ3：トークナイザを導入](https://www.sigbus.info/compilerbook#%E3%82%B9%E3%83%86%E3%83%83%E3%83%973%E3%83%88%E3%83%BC%E3%82%AF%E3%83%8A%E3%82%A4%E3%82%B6%E3%82%92%E5%B0%8E%E5%85%A5)
   - [x] [ステップ4：エラーメッセージを改良](https://www.sigbus.info/compilerbook#%E3%82%B9%E3%83%86%E3%83%83%E3%83%974%EF%BC%9A%E3%82%A8%E3%83%A9%E3%83%BC%E3%83%A1%E3%83%83%E3%82%BB%E3%83%BC%E3%82%B8%E3%82%92%E6%94%B9%E8%89%AF)
   - [x] [ステップ5：四則演算のできる言語の作成](https://www.sigbus.info/compilerbook#%E3%82%B9%E3%83%86%E3%83%83%E3%83%975%E5%9B%9B%E5%89%87%E6%BC%94%E7%AE%97%E3%81%AE%E3%81%A7%E3%81%8D%E3%82%8B%E8%A8%80%E8%AA%9E%E3%81%AE%E4%BD%9C%E6%88%90)
   - [x] [ステップ6：単項プラスと単項マイナス](https://www.sigbus.info/compilerbook#%E3%82%B9%E3%83%86%E3%83%83%E3%83%976%E5%8D%98%E9%A0%85%E3%83%97%E3%83%A9%E3%82%B9%E3%81%A8%E5%8D%98%E9%A0%85%E3%83%9E%E3%82%A4%E3%83%8A%E3%82%B9)
   - [x] [ステップ7: 比較演算子](https://www.sigbus.info/compilerbook#%E3%82%B9%E3%83%86%E3%83%83%E3%83%977-%E6%AF%94%E8%BC%83%E6%BC%94%E7%AE%97%E5%AD%90)
   - [ ] [ステップ8: ファイル分割とMakefileの変更](https://www.sigbus.info/compilerbook#%E3%82%B9%E3%83%86%E3%83%83%E3%83%978-%E3%83%95%E3%82%A1%E3%82%A4%E3%83%AB%E5%88%86%E5%89%B2%E3%81%A8makefile%E3%81%AE%E5%A4%89%E6%9B%B4)
 - [x] [付録3：Dockerを使った開発環境の作成](https://www.sigbus.info/compilerbook#docker)
   - [x] Prepare Docker environment

# [アセンブラとは](https://www.sigbus.info/compilerbook#%E3%82%A2%E3%82%BB%E3%83%B3%E3%83%96%E3%83%A9%E3%81%A8%E3%81%AF)

`objdump -d /bin/ls`

`man objdump`


# [Cとそれに対応するアセンブラ](https://www.sigbus.info/compilerbook#c%E3%81%A8%E3%81%9D%E3%82%8C%E3%81%AB%E5%AF%BE%E5%BF%9C%E3%81%99%E3%82%8B%E3%82%A2%E3%82%BB%E3%83%B3%E3%83%96%E3%83%A9)

```
$ make run ARG0=-it
```

## test1

```
$ make test1
$ ./test1
$ echo $?
```

```
$ objdump -d -M intel test1
```

```
$ cc -S -fno-asynchronous-unwind-tables -masm=intel test1.c
$ cat test1.s
$ cc -o test1 test1.s
$ ./test1
$ echo $?
42
```

## test2


```
$ make test2
$ ./test2
$ echo $?
```

```
$ objdump -d -M intel test2
```

```
$ cc -S -fno-asynchronous-unwind-tables -masm=intel -O0 test2.c
$ cat test2.s
```

# [電卓レベルの言語の作成](https://www.sigbus.info/compilerbook#%E9%9B%BB%E5%8D%93%E3%83%AC%E3%83%99%E3%83%AB%E3%81%AE%E8%A8%80%E8%AA%9E%E3%81%AE%E4%BD%9C%E6%88%90)

## [ステップ1：整数1個をコンパイルする言語の作成](https://www.sigbus.info/compilerbook#%E3%82%B9%E3%83%86%E3%83%83%E3%83%971%E6%95%B4%E6%95%B01%E5%80%8B%E3%82%92%E3%82%B3%E3%83%B3%E3%83%91%E3%82%A4%E3%83%AB%E3%81%99%E3%82%8B%E8%A8%80%E8%AA%9E%E3%81%AE%E4%BD%9C%E6%88%90)

```
cc -o 9cc 9cc.c
./9cc 123 > tmp.s
cat tmp.s
cc -o tmp tmp.s
./tmp
echo $?
```

```
bash ./test.sh
```

```
bash -x test.sh
```

## [ステップ2：加減算のできるコンパイラの作成](https://www.sigbus.info/compilerbook#%E3%82%B9%E3%83%86%E3%83%83%E3%83%972%E5%8A%A0%E6%B8%9B%E7%AE%97%E3%81%AE%E3%81%A7%E3%81%8D%E3%82%8B%E3%82%B3%E3%83%B3%E3%83%91%E3%82%A4%E3%83%A9%E3%81%AE%E4%BD%9C%E6%88%90)

```
$ cc -o tmp tmp.s
$ ./tmp
$ echo $?
```

```
$ make
$ ./9cc '5+20-4'
```

## [ステップ3：トークナイザを導入](https://www.sigbus.info/compilerbook#%E3%82%B9%E3%83%86%E3%83%83%E3%83%973%E3%83%88%E3%83%BC%E3%82%AF%E3%83%8A%E3%82%A4%E3%82%B6%E3%82%92%E5%B0%8E%E5%85%A5)

```
$ ./9cc '5 - 3' > tmp.s
予期しない文字です: ' '
```

```
$ make test
```

## [ステップ4：エラーメッセージを改良](https://www.sigbus.info/compilerbook#%E3%82%B9%E3%83%86%E3%83%83%E3%83%974%EF%BC%9A%E3%82%A8%E3%83%A9%E3%83%BC%E3%83%A1%E3%83%83%E3%82%BB%E3%83%BC%E3%82%B8%E3%82%92%E6%94%B9%E8%89%AF)

## [ステップ5：四則演算のできる言語の作成](https://www.sigbus.info/compilerbook#%E3%82%B9%E3%83%86%E3%83%83%E3%83%975%E5%9B%9B%E5%89%87%E6%BC%94%E7%AE%97%E3%81%AE%E3%81%A7%E3%81%8D%E3%82%8B%E8%A8%80%E8%AA%9E%E3%81%AE%E4%BD%9C%E6%88%90)

## [ステップ6：単項プラスと単項マイナス](https://www.sigbus.info/compilerbook#%E3%82%B9%E3%83%86%E3%83%83%E3%83%976%E5%8D%98%E9%A0%85%E3%83%97%E3%83%A9%E3%82%B9%E3%81%A8%E5%8D%98%E9%A0%85%E3%83%9E%E3%82%A4%E3%83%8A%E3%82%B9)

## [ステップ7: 比較演算子](https://www.sigbus.info/compilerbook#%E3%82%B9%E3%83%86%E3%83%83%E3%83%977-%E6%AF%94%E8%BC%83%E6%BC%94%E7%AE%97%E5%AD%90)

```
$ cc -S -fno-asynchronous-unwind-tables -masm=intel -O0 -c test3.c
# cat test3.s
$ cc -fno-asynchronous-unwind-tables -masm=intel -O0 -c test3.c
$ objdump -D -M intel test3.o
```

```
cc -static -Wl,--omagic -o test3 test3.o
./test3
echo $?
```

## [ステップ8: ファイル分割とMakefileの変更](https://www.sigbus.info/compilerbook#%E3%82%B9%E3%83%86%E3%83%83%E3%83%978-%E3%83%95%E3%82%A1%E3%82%A4%E3%83%AB%E5%88%86%E5%89%B2%E3%81%A8makefile%E3%81%AE%E5%A4%89%E6%9B%B4)

```
make run ARG0=-it ARG=/bin/sh
```
