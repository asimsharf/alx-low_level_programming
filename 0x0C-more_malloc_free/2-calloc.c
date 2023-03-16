#include <stdlib.h>
#include "main.h"

/**
 * _calloc - function that allocates memory
 * @nmemb: value 1
 * @size: value 2
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *res;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	res = malloc(nmemb * size);
	if (res == NULL)
		return (NULL);
	for (; i < nmemb * size; i++)
	{
		res[i] = 0;
	}
	return (res);
}
