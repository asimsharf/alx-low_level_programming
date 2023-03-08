#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @string: The string to be measured.
 *
 * Return: The length of the string.
 */

int _strlen_recursion(char *string)
{
	int length = 0;

	if (*string)
	{
		length++;
		length += _strlen_recursion(string + 1);
	}

	return (length);
}
