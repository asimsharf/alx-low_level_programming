#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int i = 1;
	int count = 0;

	while (i <= n)
	{
		i <<= 1;
		count++;
	}
	while (count > 0)
	{
		i >>= 1;
		if (n & i)
			_putchar('1');
		else
			_putchar('0');
		count--;
	}
}
