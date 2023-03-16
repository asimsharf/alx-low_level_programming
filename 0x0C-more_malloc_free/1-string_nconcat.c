#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: value 1
 * @s2: value 2
 * @n: value 3
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int i = 0, j = 0, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	if (n >= j)
		n = j;
	j = 0;
	res = malloc(sizeof(char) * (i + n + 1));
	if (res == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
	{
		res[k] = s1[k];
	}
	for (; k < (i + n); k++)
	{
		res[k] = s2[k - i];
	}
	res[k] = '\0';
	return (res);
}
