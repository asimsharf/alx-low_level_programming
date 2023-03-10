#include "main.h"

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
