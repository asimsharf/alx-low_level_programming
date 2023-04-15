#include "main.h"
/**
 * get_bit - Entry Point
 * @n: input
 * @index: index
 * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;
	int bit;

	if (index < sizeof(n) * 8)
	{
		for (i = 0; i <= index; i++)
		{
			if (index == i)
			{
				if (n % 2 == 1)
				{
					bit = 1;
				} else
				{
					bit = 0;
				}
				return (bit);
			}
			n >>= 1;
		}
	}
	return (-1);
}
