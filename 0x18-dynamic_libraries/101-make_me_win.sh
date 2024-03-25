#!/bin/bash
gcc -shared -o libwin.so -fPIC win.c
LD_PRELOAD=/$PWD/libwin.so ./gm 9 8 10 24 75 9
