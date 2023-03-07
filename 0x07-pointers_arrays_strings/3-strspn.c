/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be searched
 * @accept: string containing the characters to match
 * Return: number of bytes in the initial segment of s which consist only of
 * bytes from accept
 * Description: returns the number of bytes in the initial segment of s which
 */

unsigned int _strspn(char *s, char *accept)
{
int j = 0, i = 0;
unsigned int count = 0;

while (s[i] != ' ' && s[i] != '\0')
{
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
count++;
}
j++;
}
i++;
j = 0;
}
return (count);
}
