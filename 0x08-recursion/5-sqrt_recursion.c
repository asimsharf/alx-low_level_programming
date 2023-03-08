#include "main.h"

/**
 * find_sqrt - Finds the natural square root of an inputted number.
 * @number: The number to find the square root of.
 * @root: The root to be tested.
 *
 * Return: If the number has a natural square root - the square root.
 *         If the number does not have a natural square root - -1.
 */

int find_sqrt(int number, int root)
{
	if ((root * root) == number)
		return (root);

	if (root == number / 2)
		return (-1);

	return (find_sqrt(number, root + 1));
}

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
