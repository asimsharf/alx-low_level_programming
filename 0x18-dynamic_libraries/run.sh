gcc -c -fPIC *.c
gcc -shared *.o -o libdynamic.so
gcc *.c -o libdynamic -L/path/to/library -libdynamic
export LD_LIBRARY_PATH=/path/to/library:$LD_LIBRARY_PATH
ls -la lib*
nm -D libdynamic.so