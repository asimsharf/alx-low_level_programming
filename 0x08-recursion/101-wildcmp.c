#include "main.h"

/**
 * strlen_no_wilds - Returns the length of a string,
 *                   ignoring wildcard characters.
 * @string: The string to be measured.
 *
 * Return: The length.
 */

int strlen_no_wilds(char *string)
{
	int length = 0, index = 0;

	if (*(string + index))
	{
		if (*string != '*')
			length++;

		index++;
		length += strlen_no_wilds(string + index);
	}

	return (length);
}

/**
 * iterate_wild - Iterates through a string located at a wildcard
 *                until it points to a non-wildcard character.
 * @wildstring: The string to be iterated through.
 */
void iterate_wild(char **wildstring)
{
	if (**wildstring == '*')
	{
		(*wildstring)++;
		iterate_wild(wildstring);
	}
}

/**
 * postfix_match - Checks if a string string matches the postfix of
 *                 another string potentially containing wildcards.
 * @string: The string to be matched.
 * @postfix: The postfix.
 *
 * Return: If string and postfix are identical - a pointer to the null byte
 *                                            located at the end of postfix.
 *         Otherwise - a pointer to the first unmatched character in postfix.
 */

char *postfix_match(char *string, char *postfix)
{
	int string_length = strlen_no_wilds(string) - 1;
	int postfix_length = strlen_no_wilds(postfix) - 1;

	if (*postfix == '*')
		iterate_wild(&postfix);

	if (*(string + string_length - postfix_length) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (postfix_match(string, postfix));
	}

	return (postfix);
}

/**
 * wildcmp - Compares two strings, considering wildcard characters.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared - may contain wildcards.
 *
 * Return: If the strings can be considered identical - 1.
 *         Otherwise - 0.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wild(&s2);
		s2 = postfix_match(s1, s2);
	}

	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}
