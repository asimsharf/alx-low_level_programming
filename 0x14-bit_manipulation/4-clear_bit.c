#include "main.h"
/**
 * clear_bit - Entry Point
 * @n: input
 * @index: index
 * Return: 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index < sizeof(*n) * 8)
	{
		for (i = 0; i <= index; i++)
		{
			if (index == i)
			{
				*n &= ~(1 << index);
				return (1);
			}
		}
	}
	return (-1);
}
