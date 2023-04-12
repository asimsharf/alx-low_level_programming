#include "main.h"
/**
 * create_file - Entry Point
 * @filename: file name
 * @text_content: null terminated string to write
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, write_letter, length;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (length = 0; text_content[length]; length++)
			;

		write_letter = write(fd, text_content, length);
		if (write_letter == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
