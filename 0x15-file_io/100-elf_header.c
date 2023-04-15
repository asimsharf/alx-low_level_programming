#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <elf.h>

/* Function prototypes */
int read_elf_header(char *filename, Elf64_Ehdr *ehdr);
void print_elf_header(Elf64_Ehdr ehdr);

/**
 * main - Entry point
 * DESCRIPTION: a program that displays the information contained
 * in the ELF header at the start of an ELF file
 * @argc: number of command line arguments passed to the program
 * @argv: arguments passed through command line
 * Return: 0 for success
 */
int main(int argc, char **argv)
{
	Elf64_Ehdr ehdr;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}
	if (read_elf_header(argv[1], &ehdr) == -1)
	{
		fprintf(stderr, "Error: unable to read ELF header\n");
		exit(98);
	}
	print_elf_header(ehdr);
	return (0);
}

/**
 * read_elf_header - Reads the ELF header from a file.
 * @filename: The name of the file to read from.
 * @ehdr: A pointer to a buffer to store the ELF header in.
 * Return: 0 for success, -1 for failure.
 */
int read_elf_header(char *filename, Elf64_Ehdr *ehdr)
{
	int fd = open(filename, O_RDONLY);
	ssize_t n;

	if (fd == -1)
	{
		perror("open");
		return (-1);
	}
	n = read(fd, ehdr, sizeof(*ehdr));
	if (n == -1)
	{
		perror("read");
		close(fd);
		return (-1);
	}
	if ((unsigned long int)n < sizeof(*ehdr))
	{
		fprintf(stderr, "%s: file too short\n", filename);
		close(fd);
		return (-1);
	}
	if (memcmp(ehdr->e_ident, ELFMAG, SELFMAG) != 0)
	{
		fprintf(stderr, "%s: not an ELF file\n", filename);
		close(fd);
		return (-1);
	}
	close(fd);
	return (0);
}

/**
 * print_elf_header - Prints the ELF header to standard output.
 * @ehdr: The ELF header to print.
 */
void print_elf_header(Elf64_Ehdr ehdr)
{
	int i;
	char space[] = "                             ";

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", ehdr.e_ident[i]);
	}
	printf("\n");
	printf("Class:%s%s\n",
			space, ehdr.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("Data:%s%s\n", space,
			ehdr.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
			"2's complement, big endian");
	printf("Version:%s%d (current)\n", space, ehdr.e_ident[EI_VERSION]);
	printf("ABI Version:%s%d\n", space, ehdr.e_ident[EI_ABIVERSION]);
}
