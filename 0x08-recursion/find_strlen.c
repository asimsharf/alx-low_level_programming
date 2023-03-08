#include "main.h"

/**
 * find_strlen - Returns the length of a string.
 * @string: The string to be measured.
 *
 * Return: The length of the string.
 */

int find_strlen(char *string)
{
	int length = 0;

	if (*(string + length))
	{
		length++;
		length += find_strlen(string + length);
	}

	return (length);
}
