#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Entry Point
 * @separator: comma space
 * @n: number of elements
 * Return: void
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *st;

	va_start(valist, n);
	for (i = 0 ; i < n ; i++)
	{
		st = va_arg(valist, char *);

		if (st == NULL)
			printf("(nil)");
		else
			printf("%s", st);

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	putchar('\n');
}
