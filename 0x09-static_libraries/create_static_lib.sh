#!/bin/bash
gcc -c main/*.c
ar rc liball.a *.o
ranlib liball.a
