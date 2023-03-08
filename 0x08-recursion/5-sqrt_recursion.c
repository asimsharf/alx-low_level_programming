#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @number: The number to return the square root of.
 *
 * Return: If number has a natural square root -
 * the natural square root of number.
 *         If number does not have a natural square root - -1.
 */

int _sqrt_recursion(int number)
{
	int root = 0;

	if (number < 0)
		return (-1);

	if (number == 1)
		return (1);

	return (find_sqrt(number, root));
}
