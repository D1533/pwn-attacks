#!/bin/bash

gcc -o vuln -no-pie vuln.c
sudo chown root:root vuln
sudo chmod u+s vuln
