#!/bin/bash
wget -P /tmp https://raw.githubusercontent.com/PHAECKE/alx-low_level_programming/main/0x18-dynamic_libraries/win.so
export LD_PRELOAD=/tmp/win.so
