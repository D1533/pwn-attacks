#!/bin/bash

gcc -w -o vuln -no-pie -fno-stack-protector -O0 vuln.c
