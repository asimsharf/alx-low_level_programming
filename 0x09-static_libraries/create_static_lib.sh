#!/bin/bash
gcc -c main/*.c func/*.c
ar rc liball.a *.o
ranlib liball.a
