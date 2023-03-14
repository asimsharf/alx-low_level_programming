#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array of chars
 * @size: number of elements
 * @c: size of one unit
 *
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *res;
	unsigned int i;

	if (size == 0)
		return (NULL);
	res = malloc(size * sizeof(char));
	if (res == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		res[i] = c;
	}
	return (res);
}
