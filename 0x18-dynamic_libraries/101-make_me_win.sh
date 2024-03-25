#!/bin/bash
gcc -c -fPIC win.c
gcc -shared -o libwin.so win.o
LD_PRELOAD=/root/alx-low_level_programming/0x18-dynamic_libraries/libwin.so ./gm 9 8 10 24 75 9
