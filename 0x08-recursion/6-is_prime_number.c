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

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 *
 * Return: If the integer is not prime - 0.
 *         If the number is prime - 1.
 */
int is_prime_number(int n)
{
	int divisor = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, divisor));
}
