/*
 * File: 7-leet.c
 * Auth: Asim Sharfeldin
 */

#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to be encoded
 *
 * Return: pointer to the encoded string
 */
char *leet(char *str)
{
int indxOne = 0, indxTwo;
char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

while (str[indxOne])
{
for (indxTwo = 0; indxTwo <= 7; indxTwo++)
{
if (str[indxOne] == leet[indxTwo] ||
str[indxOne] - 32 == leet[indxTwo])
str[indxOne] = indxTwo + '0';
}

indxOne++;
}

return (str);
}
