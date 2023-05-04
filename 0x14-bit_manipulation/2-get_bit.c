#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to be evaluated
 * @index: index of the bit to be returned
 * Return: value of the bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 1;
	unsigned int count = 0;

	while (i <= n)
	{
		i <<= 1;
		count++;
	}
	if (index > count)
		return (-1);
	while (count > index)
	{
		i >>= 1;
		count--;
	}
	if (n & i)
		return (1);
	else
		return (0);
}
