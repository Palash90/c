#!/bin/bash
clear
echo "Compiling" $1

gcc -Wall -g $1.c -o /home/palash/output/$1
/home/palash/output/$1

