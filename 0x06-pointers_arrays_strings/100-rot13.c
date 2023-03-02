/*
 * File: 100-rot13.c
 * Auth: Asim Sharfeldin
 */

#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @s: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */

char *rot13(char *s)
{
int i, j;
char *a = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *b = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; s[i]; i++)
{
for (j = 0; a[j]; j++)
{
if (s[i] == a[j])
{
s[i] = b[j];
break;
}
}
}

return (s);
}
