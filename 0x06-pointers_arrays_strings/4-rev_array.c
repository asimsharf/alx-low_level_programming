/*
 * File: 4-rev_array.c
 * Auth: Asim Sharfeldin
 */

#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array to be reversed.
 * @n: The number of elements of the array.
 */

void reverse_array(int *a, int n)
{
int i = 0, j = n - 1, temp;
while (i < j)
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
i++;
j--;
}
}
