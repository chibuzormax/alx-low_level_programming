#!/bin/bash
wget -P /tmp https://github.com/eyoul/alx-low_level_programming/raw/main/0x018-dynamic_libraries/iwin.so
export LD_PRELOAD=/tmp/iwin.so
