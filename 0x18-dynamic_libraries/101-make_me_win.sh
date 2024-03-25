#!/bin/bash
gcc -c -fPIC win.c
gcc -shared -o libwin.so win.o
LD_PRELOAD=/$PWD/libwin.so ./gm 9 8 10 24 75 9
