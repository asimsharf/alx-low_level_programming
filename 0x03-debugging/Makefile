all: check-betty-style 0 1 2 3 4 5

check-betty-style:
	./Betty/betty.sh *.c *.h

0:
	gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c main.c
	./a.out

1:
	gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c 0-main.c -o 0-main
	./0-main

2:
	gcc -std=gnu89 1-main.c -o 1-main
	./1-main

3:
	gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-largest_number.c 2-main.c -o 2-main
	./2-main

4:
	gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c 3-main_a.c -o 3-main_a
	./3-main_a

5:
	gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c 3-main_b.c -o 3-main_b
	./3-main_b


clean:
	rm -rf 1-main 2-main 3-main_a 3-main_b *.o *.out *.gch
