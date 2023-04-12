#include "main.h"

/**
 * append_text_to_file - Entry Point
 * @filename: file name
 * @text_content: text content
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int new_letters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (new_letters = 0; text_content[new_letters]; new_letters++)
			;

		rwr = write(fd, text_content, new_letters);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
