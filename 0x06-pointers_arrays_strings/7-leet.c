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
int i = 0, j = 0;
char *letters = "aAeEoOtTlL";
char *numbers = "4433007711";
while (str[i] != '\0')
{
for (j = 0; j < 10; j++)
{
if (str[i] == letters[j])
{
str[i] = numbers[j / 2];
}
}
i++;
}
return (str);
}
