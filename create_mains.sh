#!/bin/bash

mkdir mains/

for argument in *-*.c
do
    touch "mains/${argument%-*}-main.c"
done
