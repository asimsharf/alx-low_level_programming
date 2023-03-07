/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: substring to search for
 * Return: pointer to the beginning of the located substring, or NULL if the
 * substring is not found
 * Description: finds the first occurrence of the substring needle in the
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = i, k = 0; needle[k] != '\0' && haystack[j] == needle[k]; j++, k++)
			;
		if (needle[k] == '\0')
		{
			return (haystack + i);
		}
	}
	return ('\0');
}
