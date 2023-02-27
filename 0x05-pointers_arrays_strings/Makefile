GCC=gcc -Wall -Werror -Wextra -pedantic -std=gnu89

all: 0 1 2 3 4 5 6 7 8 9 10 11

check:
	./betty/betty-style.pl *.c *.h ./tests/*.c && ./betty/betty-doc.pl *.c *.h ./tests/*.c 

0:
	$(GCC) ./tests/0-main.c 0-reset_to_98.c -o 0-98	&& ./0-98

1:
	$(GCC) ./tests/1-main.c 1-swap.c -o 1-swap && ./1-swap

2:
	$(GCC) ./tests/2-main.c 2-strlen.c -o 2-strlen && ./2-strlen

3:
	$(GCC) _putchar.c ./tests/3-main.c 3-puts.c -o 3-puts && ./3-puts

4:
	$(GCC) _putchar.c ./tests/4-main.c 4-print_rev.c -o 4-print_rev && ./4-print_rev

5:
	$(GCC) ./tests/5-main.c 5-rev_string.c -o 5-rev_string && ./5-rev_string

6:
	$(GCC) _putchar.c ./tests/6-main.c 6-puts2.c -o 6-puts2 && ./6-puts2

7:
	$(GCC) _putchar.c ./tests/7-main.c 7-puts_half.c -o 7-puts_half && ./7-puts_half

8:
	$(GCC) ./tests/8-main.c 8-print_array.c -o 8-print_array && ./8-print_array

9:
	$(GCC) ./tests/9-main.c 9-strcpy.c -o 9-strcpy && ./9-strcpy

10:
	$(GCC) -fsanitize=signed-integer-overflow ./tests/100-main.c 100-atoi.c -o 100-atoi && ./100-atoi

11:
	gcc -Wall -pedantic -Werror -Wextra 101-keygen.c -o 101-keygen && ./101-crackme "`./101-keygen`"

clean:
	rm -f 0-98 1-swap 2-strlen 3-puts 4-print_rev 5-rev_string 6-puts2 7-puts_half 8-print_array 9-strcpy 100-atoi 101-keygen 101-crackme *.o *.out *.gch

