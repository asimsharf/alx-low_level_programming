#!/bin/bash
gcc -c main/*.c
ar rc libmy.a *.o
ranlib libmy.a
