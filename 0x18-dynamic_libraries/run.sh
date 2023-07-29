#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c -fPIC *.c
gcc -Wall -pedantic -Werror -Wextra -shared -o libdynamic.so *.o
gcc -shared -o liball.so *.o
gcc -shared -o 100-operations.so *.o
gcc -shared -o win.so *.o
# gcc -Wall -pedantic -Werror -Wextra *.c -o libdynamic -L/path/to/library -libdynamic
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
# ls -la lib*
# nm -D libdynamic.so
