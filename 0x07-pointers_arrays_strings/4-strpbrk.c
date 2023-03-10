/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: string containing the characters to match
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 * Description: locates the first occurrence in the string s of any of the
*/

char *_strpbrk(char *s, char *accept)
{
int j = 0;

while (*s)
{
while (accept[j] != '\0')
{
if (*s == accept[j])
{
return (s);
}
j++;
}
j = 0;
s++;
}
return ('\0');
}
