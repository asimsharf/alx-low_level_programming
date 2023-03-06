/**
 * _memcpy - copies memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to copy
 * Return: pointer to destination memory area
 * Description: copies n bytes from memory area src to memory area dest
 */

void *_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int i;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (i = 0; i < n; i++)
		destination[i] = source[i];

	return (dest);
}
