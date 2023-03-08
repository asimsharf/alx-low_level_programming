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
