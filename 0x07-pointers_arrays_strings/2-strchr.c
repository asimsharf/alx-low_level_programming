/**
 * _strchr - locates a character in a string
 * @s: string to search
 * @c: character to search for
 * Return: pointer to first occurrence of c in s, or NULL if not found
 * Description: returns a pointer to the first occurrence of the character c
*/

char *_strchr(char *s, char c)
{
  while(*s != '\0'){
    if(*s == c){
      return (s);
    }
    i++;
  }
  return (s = 0);
}
