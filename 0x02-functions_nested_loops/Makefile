GCC=gcc -Wall -pedantic -Werror -Wextra -std=gnu89

all: check-betty-style 0-putchar 1-alphabet 2-print_alphabet_x10 3-islower 4-isalpha 5-sign 6-abs 7-print_last_digit 8-24_hours 9-times_table 10-add 11-print_to_98 100-times_table 101-natural 102-fibonacci 103-fibonacci 104-fibonacci

check-betty-style:
	./Betty/betty.sh *.c *.h ./tests/*.c

0-putchar:
	$(GCC) 0-putchar.c _putchar.c asim.h

1-alphabet:
	$(GCC) ./tests/1-main.c 1-alphabet.c _putchar.c asim.h

2-print_alphabet_x10:
	$(GCC) ./tests/2-main.c 2-print_alphabet_x10.c _putchar.c asim.h

3-islower:	
	$(GCC) ./tests/3-main.c 3-islower.c _putchar.c asim.h

4-isalpha:
	$(GCC) ./tests/4-main.c 4-isalpha.c _putchar.c asim.h

5-sign:
	$(GCC) ./tests/5-main.c 5-sign.c _putchar.c asim.h

6-abs:
	$(GCC) ./tests/6-main.c 6-abs.c _putchar.c asim.h

7-print_last_digit:
	$(GCC) ./tests/7-main.c 7-print_last_digit.c _putchar.c asim.h

8-24_hours:
	$(GCC) ./tests/8-main.c 8-24_hours.c _putchar.c asim.h

9-times_table:
	$(GCC) ./tests/9-main.c 9-times_table.c _putchar.c asim.h

10-add:
	$(GCC) ./tests/10-main.c 10-add.c _putchar.c asim.h

11-print_to_98:
	$(GCC) ./tests/11-main.c 11-print_to_98.c _putchar.c asim.h

100-times_table:
	$(GCC) ./tests/100-main.c 100-times_table.c _putchar.c asim.h

101-natural:
	$(GCC) 101-natural.c

102-fibonacci:
	$(GCC) 102-fibonacci.c

103-fibonacci:
	$(GCC) 103-fibonacci.c

104-fibonacci:
	$(GCC) 104-fibonacci.c

zip:
	zip -r 0x02-functions_nested_loops.zip .