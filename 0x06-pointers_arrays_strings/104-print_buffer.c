/*
 * File: 104-print_buffer.c
 * Auth: Asim Abdelgadir
 */

#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer 10 bytes at a time, starting with
 *                the byte position, then showing the hex content,
 *                then displaying printable charcaters.
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 */


void print_buffer(char *b, int size)
{
	int i, j, k;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", b[i + j]);
			else
				printf("  ");
			if (j % 2)
				printf(" ");
		}
		for (k = 0; k < 10; k++)
		{
			if (i + k < size)
			{
				if (b[i + k] >= 32 && b[i + k] <= 126)
					printf("%c", b[i + k]);
				else
					printf(".");
			}
		}
		printf("\n");
	}
}
