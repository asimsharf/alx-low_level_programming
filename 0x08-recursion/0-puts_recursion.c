#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @string: The string to be printed.
 */

void _puts_recursion(char *string)
{
	if (*string)
	{
		_putchar(*string);
		_puts_recursion(string + 1);
	}

	else
		_putchar('\n');
}
