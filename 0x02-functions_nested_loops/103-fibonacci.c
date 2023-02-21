/*
 * File: 103-fibonacci.c
 * Auth: Asim Abdelgadir
 */

#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long fOne = 0, fTwo = 1, fSum;
	float totalSum = 0;

	while (1)
	{
		fSum = fOne + fTwo;
		if (fSum > 4000000)
			break;

		if ((fSum % 2) == 0)
			totalSum += fSum;

		fOne = fTwo;
		fTwo = fSum;
	}
	printf("%.0f\n", totalSum);

	return (0);
}
