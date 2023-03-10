#include "main.h"

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

	if (*(string + string_length - postfix_length)
	    == *postfix && *postfix != '\0')
	{
		postfix++;
		return (postfix_match(string, postfix));
	}
	return (postfix);
}
