/*
 * File: 5-string_toupper.c
 * Auth: Asim Sharfeldin
 */

#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to be changed
 * Return: pointer to the changed string
 */

char *cap_string(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
if (str[i] == ' ' ||
str[i] == '\t' ||
str[i] == '\n' ||
str[i] == ',' ||
str[i] == ';' ||
str[i] == '.' ||
str[i] == '!' ||
str[i] == '?' ||
str[i] == '"' ||
str[i] == '(' ||
str[i] == ')' ||
str[i] == '{' ||
str[i] == '}')
{
str[i + 1] = str[i + 1] - 32;
}
i++;
}
return (str);
}
