/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area
 * @b: constant byte
 * @n: number of bytes to fill
 * Return: pointer to memory area s
 * Description: fills the first n bytes of the memory area pointed to by s
 */

char *_memset(char *s, char b, unsigned int n){
  unsigned int i;

  unsigned char *memory = s, v = c;

  for(i = 0; i < n; i++)
    memory[i] = v;

  return (memory);
}
