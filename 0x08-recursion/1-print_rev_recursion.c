#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @string: The string to be printed.
 */

void _print_rev_recursion(char *string)
{
	if (*string)
	{
		_print_rev_recursion(string + 1);
		_putchar(*string);
	}
}
