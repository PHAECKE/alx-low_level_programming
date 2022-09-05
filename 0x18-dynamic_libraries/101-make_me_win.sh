#!/bin/bash
wget -P .. https://raw.githubusercontent.com/PHAECKE/alx-low_level_programming/main/0x18-dynamic_libraries/libruin.so
export LD_PRELOAD="$PWD/../libruin.so"
