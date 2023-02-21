/*
 * File: 104-fibonacci.c
 * Auth: Asim Abdelgadir
 */

#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long fOne = 0, fTwo = 1, sum;
	unsigned long fOneHalfOne, fOneHalfTwo, fTwoHalfOne, fTwoHalfTwo;
	unsigned long halfOne, halfTwo;

	for (count = 0; count < 92; count++)
	{
		sum = fOne + fTwo;
		printf("%lu, ", sum);

		fOne = fTwo;
		fTwo = sum;
	}

	fOneHalfOne = fOne / 10000000000;
	fTwoHalfOne = fTwo / 10000000000;
	fOneHalfTwo = fOne % 10000000000;
	fTwoHalfTwo = fTwo % 10000000000;

	for (count = 93; count < 99; count++)
	{
		halfOne = fOneHalfOne + fTwoHalfOne;
		halfTwo = fOneHalfTwo + fTwoHalfTwo;
		if (fOneHalfTwo + fTwoHalfTwo > 9999999999)
		{
			halfOne += 1;
			halfTwo %= 10000000000;
		}

		printf("%lu%lu", halfOne, halfTwo);
		if (count != 98)
			printf(", ");

		fOneHalfOne = fTwoHalfOne;
		fOneHalfTwo = fTwoHalfTwo;
		fTwoHalfOne = halfOne;
		fTwoHalfTwo = halfTwo;
	}
	printf("\n");
	return (0);
}
