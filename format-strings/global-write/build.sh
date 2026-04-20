#!/bin/bash

gcc -o vuln -no-pie -O0 vuln.c
sudo chown root:root vuln
sudo chmod u+s vuln
