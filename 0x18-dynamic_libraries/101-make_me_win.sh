#!/bin/bash
wget -P .. https://github.com/NohaSalahELdeen/alx-low_level_programming/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD="$PWD/../libgiga.so"
