#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, readed, closed, written;
	char buffer[1024];
	char err0[] = "Usage: cp file_from file_to\n";
	char err1[] = "Error: Can't read from file ";
	char err2[] = "Error: Can't write to ";
	char err3[] = "Error: Can't close fd ";
	char err4[] = "Error: Can't close fd ";

	if (argc != 3)
		dprintf(STDERR_FILENO, "%s", err0), exit(97);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "%s%s\n", err1, argv[1]), exit(98);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "%s%s\n", err2, argv[2]), exit(99);
	readed = read(fd_from, buffer, 1024);
	if (readed == -1)
		dprintf(STDERR_FILENO, "%s%s\n", err1, argv[1]), exit(98);
	while (readed > 0)
	{
		written = write(fd_to, buffer, readed);
		if (written == -1)
			dprintf(STDERR_FILENO, "%s%s\n", err2, argv[2]), exit(99);
		readed = read(fd_from, buffer, 1024);
		if (readed == -1)
			dprintf(STDERR_FILENO, "%s%s\n", err1, argv[1]), exit(98);
	}
	closed = close(fd_from);
	if (closed == -1)
		dprintf(STDERR_FILENO, "%s%d\n", err3, fd_from), exit(100);
	closed = close(fd_to);
	if (closed == -1)
		dprintf(STDERR_FILENO, "%s%d\n", err4, fd_to), exit(100);
	return (0);
}
