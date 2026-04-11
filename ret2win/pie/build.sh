#!/bin/bash

gcc -o vuln \
    -fno-stack-protector \
    -O0 \
    -w \
   vuln.c

sudo chown root:root vuln
sudo chmod u+s vuln
