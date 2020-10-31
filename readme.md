# Hacker Rank - C++

## Description

Collection of various Hacker Rank problems written in c++.

## Categories in Progress

* **Algorithms**

## Bonus Problem Sets

* **ACM Code Meet-ups**

## Structure

This repository aims to keep each category & sub categories in their own directory to reflect the structure of Hacker Rank's problem sets; e.g. algorithms -> warmup -> *problem*. Each problem will compile & able to be ran on the command line as well as, include a makefile & input.txt file to display the results. Each program is designed to consume the included input file.

## Program Execution

The following command is used to execute each of the programs:

```cpp
./<program name> < input.txt
```

## Program Compilation

Each program has been compiled with the following command (included in the corresponding makefile):

```~$ g++ -Wall -g -pedantic -pedantic-errors -std=c++11 -o <problemname> <problemname>.cpp```

At the time of writing, the compilation & execution of each of the programs has been done with Cygwin.
