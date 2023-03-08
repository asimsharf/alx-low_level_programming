#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @number: The number to find the factorial of.
 *
 * Return: If number > 0 - the factorial of number.
 *         If number < 0 - 1 to indicate an error.
 */

int factorial(int number)
{
	int result = number;

	if (number < 0)
		return (-1);

	else if (number >= 0 && number <= 1)
		return (1);

	result *= factorial(number - 1);

	return (result);
}
