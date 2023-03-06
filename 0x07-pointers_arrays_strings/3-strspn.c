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
    unsigned int i, j, count = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; accept[j] != '\0'; j++)
        {
            if (s[i] == accept[j])
            {
                count++;
                break;
            }
        }
        if (accept[j] == '\0')
        {
            break;
        }
    }
    return (count);
}
