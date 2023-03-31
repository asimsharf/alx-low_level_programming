#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * first - a function that prints before the main function is executed.
 * Return: void
*/

void __attribute__ ((constructor)) premain(void) {
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

int main(void)
{
	printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
	return (0);
}
