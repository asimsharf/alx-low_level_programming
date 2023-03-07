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
int i, j;
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i] == needle[j])
{
return (haystack + i);
}
}
}
return ('\0');
}
