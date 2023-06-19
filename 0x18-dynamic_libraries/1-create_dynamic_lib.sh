#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -fPIC *.c -shared -o libdynamic.so
gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -ldynamic -o len