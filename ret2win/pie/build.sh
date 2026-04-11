#!/bin/bash

gcc -o vuln \
    -fno-stack-protector \
    -O0 \
    -w \
   vuln.c

