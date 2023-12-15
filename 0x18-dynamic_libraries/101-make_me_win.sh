#!/bin/bash
gcc -shared -o librand.so -fPIC rand.c
export LD_PRELOAD=./librand.so:$LD_LIBRARY_PATH
