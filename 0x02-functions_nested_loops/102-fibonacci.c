/*
 * File: 102-fibonacci.c
 * Auth: Asim Abdelgadir
 */

#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long fOne = 0, fTwo = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fOne + fTwo;
		printf("%lu", sum);

		fOne = fTwo;
		fTwo = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
