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
