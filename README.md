# K&R C Programming Book - Exercise Solutions

This repository contains solutions to exercises from **"The C Programming Language"** by Kernighan and Ritchie.

## Branches

- **kr-style**: Original K&R C syntax solutions (historical style).
- **ansi-style**: Modern ANSI C style solutions compatible with current compilers.

## Structure
```
c-exercises/
├── chapter_01/
├── chapter_02/
├── chapter_03/
...
```

Each chapter folder contains solutions for exercises in that chapter, named by exercise number, e.g., `ex_01_01.c` for Exercise 1-1.

## How to Compile

Compile individual exercises using `gcc`:

```bash
gcc chapter_01/ex_01_01.c -o ex_01_01
./ex_01_01
```

For K&R style code, compile with:

```bash
gcc -std=gnu89 -Wall chapter_01/ex_01_01.c -o ex_01_01
```

## Warnings
You may encounter compiler warnings, especially when compiling K&R style code on modern systems (tested on WSL2 Debian).

These warnings will be discussed briefly in each exercise's README or within the source file comments.

## License

This project is released under [The Unlicense](https://unlicense.org/).

To the extent possible under law, the author has waived all copyright and related or neighboring rights to this work.
