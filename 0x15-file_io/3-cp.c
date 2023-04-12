#include "main.h"
void closer(int arg_files);
/**
 * main - Entry Point
 * @argc: # of args
 * @argv: array pointer for args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int arg_files[2];
	ssize_t read_letters, write_letters;
	char *buf = malloc(sizeof(char) * 1024);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to \n");
		exit(97);
	}
	arg_files[0] = open(argv[1], O_RDONLY);
	if (arg_files[0] == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s \n", argv[1]);
		exit(98);
	}
	arg_files[1] = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (arg_files[1] == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s \n", argv[2]);
		exit(99);
	}

	while ((read_letters = read(arg_files[0], buf, 1024)) > 0)
	{
		write_letters = write(arg_files[1], buf, read_letters);
		if (write_letters == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s \n", argv[2]);
			exit(99);
		}
	}

	if (read_letters == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s \n", argv[1]);
		exit(98);
	}

	closer(arg_files);

	free(buf);

	return (0);
}
