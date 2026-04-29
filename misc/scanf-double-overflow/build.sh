#!/bin/bash

gcc -w -o vuln -no-pie -fstack-protector-strong -O0 vuln.c
sudo chown root:root vuln
sudo chmod u+s vuln
