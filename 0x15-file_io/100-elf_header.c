#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * main - displays the information contained in the ELF
 * header at the start of an ELF file
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int fd, readed;
	char buffer[5];

	if (argc != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

	readed = read(fd, buffer, 4);
	if (readed == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

	buffer[4] = '\0';

	if (buffer[0] == 0x7f && buffer[1] == 'E' && buffer[2] == 'L' && buffer[3] == 'F')
		printf("ELF Header:\n");
	else
		dprintf(STDERR_FILENO, "Error: Not an ELF file %s\n", argv[1]), exit(98);

	return (0);
}
