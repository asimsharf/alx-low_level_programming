GCC=gcc -Wall -pedantic -Werror -Wextra -std=gnu89

all: betty 0 1 2 3 4 5 6 7 8 9 10 11 12 clean

betty:
	./Betty/betty.sh *.c *.h ./tests/*.c
0:
	$(GCC) ./tests/0-main.c 0-isupper.c -o 0-isuper
	./0-isuper
1:
	$(GCC) ./tests/1-main.c 1-isdigit.c -o 1-isdigit
	./1-isdigit

2:
	$(GCC) ./tests/2-main.c 2-mul.c -o 2-mul
	./2-mul

3:
	$(GCC) _putchar.c ./tests/3-main.c 3-print_numbers.c -o 3-print_numbers
	./3-print_numbers
	./3-print_numbers | cat -e

4:
	$(GCC) _putchar.c ./tests/4-main.c 4-print_most_numbers.c -o 4-print_most_numbers
	./4-print_most_numbers

5:
	$(GCC) _putchar.c ./tests/5-main.c 5-more_numbers.c -o 5-more_numbers
	./5-more_numbers

6:
	$(GCC) _putchar.c ./tests/6-main.c 6-print_line.c -o 6-lines
	./6-lines
	./6-lines | cat -e

7:
	$(GCC) _putchar.c ./tests/7-main.c 7-print_diagonal.c -o 7-diagonals
	./7-diagonals
	./7-diagonals | cat -e

8:
	$(GCC) _putchar.c ./tests/8-main.c 8-print_square.c -o 8-squares
	./8-squares

9:
	$(GCC) 9-fizz_buzz.c -o 9-fizz_buzz
	./9-fizz_buzz

10:
	$(GCC) _putchar.c ./tests/10-main.c 10-print_triangle.c -o 10-triangles
	./10-triangles
	./10-triangles | tr ' ' . | cat -e

11:
	$(GCC) 100-prime_factor.c -o 100-prime_factor -lm
	./100-prime_factor

12:
	$(GCC) _putchar.c ./tests/101-main.c 101-print_number.c -o 101-print_numbers
	./101-print_numbers

clean:
	rm -f 0-isuper 1-isdigit 2-mul 3-print_numbers 4-print_most_numbers 5-more_numbers 6-lines 7-diagonals 8-squares 9-fizz_buzz 10-triangles 100-prime_factor 101-print_numbers
