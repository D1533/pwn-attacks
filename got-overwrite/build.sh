#!/bin/bash

gcc vuln.c -o vuln \
    -no-pie \
    -Wl,-z,norelro

sudo chown root:root vuln
sudo chmod u+s vuln
