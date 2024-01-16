#!/bin/bash
wget -P /tmp https://github.com/mahmoudhmoud/alx-low_level_programming/raw/master/0x18-dynamic_libraries/hadak.so
export LD_PRELOAD=/tmp/hadak.so
