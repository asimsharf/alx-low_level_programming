#include <stdio.h>
/**
 * positive_or_negative - prints if integer is positive or negative
 * @i: integer to be tested for positive or negative
 * Return: 0
 */

void positive_or_negative(int i)
{
if (i > 0)
{
printf("%d is positive \n", i);
}
else if (i == 0)
{

printf("%d is zero \n", i);
}
else
{
printf("%d is negative \n", i);
}
}
