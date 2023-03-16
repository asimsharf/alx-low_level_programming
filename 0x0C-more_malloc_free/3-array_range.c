#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: value 1
 * @max: value 2
 *
 * Return: pointer integer
 */

int *array_range(int min, int max)
{
	int *res;
	int p, count = 0;

	if (min > max)
		return (NULL);
	p = (max - min) + 1;
	res = malloc(p * sizeof(int));
	if (res == NULL)
		return (NULL);
	for (; count < p; count++)
	{
		res[count] = min;
		min += 1;
	}
	return (res);
}
