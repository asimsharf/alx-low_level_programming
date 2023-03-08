#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @string: The string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */

int is_palindrome(char *string)
{
	int index = 0;
	int length = find_strlen(string);

	if (!(*string))
		return (1);

	return (check_palindrome(string, length, index));
}
