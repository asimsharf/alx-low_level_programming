#include "main.h"

/**
 * read_textfile - Entry Point
 * @filename: file name
 * @letters: size
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_letters, write_letters;
	int fd;
	char *buf = malloc(sizeof(char) * letters);

	if (!buf || !filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	read_letters = read(fd, buf, letters);
	if (read_letters == -1)
		return (0);

	write_letters = write(STDOUT_FILENO, buf, read_letters);
	if (write_letters == -1)
		return (0);

	free(buf);
	close(fd);
	return (write_letters);
}
