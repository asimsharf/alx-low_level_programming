#include "main.h"

/**
 * is_divisible - Checks if a number is divisible.
 * @number: The number to be checked.
 * @divisor: The divisor.
 *
 * Return: If the number is divisible - 0.
 *         If the number is not divisible - 1.
 */

int is_divisible(int number, int divisor)
{
	if (number % divisor == 0)
		return (0);

	if (divisor == number / 2)
		return (1);

	return (is_divisible(number, divisor + 1));
}
