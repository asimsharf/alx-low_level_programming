#include "main.h"

/**
 * check_palindrome - Checks if a string is a palindrome.
 * @string: The string to be checked.
 * @length: The length of string.
 * @index: The index of the string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */

int check_palindrome(char *string, int length, int index)
{
	if (string[index] == string[length / 2])
		return (1);
	if (string[index] == string[length - index - 1])
		return (check_palindrome(string, length, index + 1));
	return (0);
}
