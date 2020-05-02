
 - [x] [機械語とアセンブラ](https://www.sigbus.info/compilerbook#%E6%A9%9F%E6%A2%B0%E8%AA%9E%E3%81%A8%E3%82%A2%E3%82%BB%E3%83%B3%E3%83%96%E3%83%A9)
   - [x] [CPUとメモリ](https://www.sigbus.info/compilerbook#cpu%E3%81%A8%E3%83%A1%E3%83%A2%E3%83%AA)
     - PC: program counter
     - IP: instruction pointer
     - ISA: instruction set architecture
   - [x] [アセンブラとは](https://www.sigbus.info/compilerbook#%E3%82%A2%E3%82%BB%E3%83%B3%E3%83%96%E3%83%A9%E3%81%A8%E3%81%AF)
     - `objdump -d /bin/ls`
     - `man objdump`
   - [x] [Cとそれに対応するアセンブラ](https://www.sigbus.info/compilerbook#c%E3%81%A8%E3%81%9D%E3%82%8C%E3%81%AB%E5%AF%BE%E5%BF%9C%E3%81%99%E3%82%8B%E3%82%A2%E3%82%BB%E3%83%B3%E3%83%96%E3%83%A9)
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
