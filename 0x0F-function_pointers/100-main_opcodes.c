#include <stdio.h>
#include <stdlib.h>

/**
 * main - print opcodes
 * @argc: the number of the arguments
 * @argv: the arguments
 *
 * Return: Always 0 for sucess
 */
int main(int argc, char *argv[])
{
	int op;
	char *m = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	op = atoi(argv[1]);

	if (op < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (op--)
		printf("%02x%c", *m++ & 0xff, op ? ' ' : '\n');

	return (0);
}
