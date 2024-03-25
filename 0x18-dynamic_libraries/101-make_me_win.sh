#!/bin/bash
gcc -shared -o libwin.so -fPIC win.c
LD_PRELOAD=/$PWD/libwin.so
