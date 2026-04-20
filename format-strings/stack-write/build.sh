#!/bin/bash

gcc -o vuln -O0 vuln.c
sudo chown root:root vuln
sudo chmod u+s vuln
