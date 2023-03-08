#include "main.h"

/**
 * _pow_recursion - Returns the value of number raised to the power of power.
 * @number: The number to be raised.
 * @power: The power.
 *
 * Return: The value of number raised to the power of power.
 */

int _pow_recursion(int number, int power)
{
	int result = number;

	if (power < 0)
		return (-1);

	else if (power == 0)
		return (1);

	result *= _pow_recursion(number, power - 1);

	return (result);
}
