#!/bin/bash 

gcc vuln.c -o vuln \
    -no-pie \
    -fno-stack-protector \
    -z execstack \
    -O0 \
    -w

sudo chown root:root vuln
sudo chmod u+s vuln
