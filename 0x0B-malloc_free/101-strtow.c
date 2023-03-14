#include <stdlib.h>
#include "main.h"

/**
 * strtow - function that splits a string into words.
 * @str: pointer
 *
 * Return: char pointer
 */

char **strtow(char *str)
{
    char **result;
    int i = 0, j = 0, k = 0, l = 0, m = 0, n = 0, o = 0, p = 0, q = 0, r = 0;

    if (str == NULL || str[0] == '\0')
        return (NULL);
    while (str[i] != '\0')
    {
        if (str[i] != ' ')
        {
            j++;
            if (str[i + 1] == ' ' || str[i + 1] == '\0')
            {
                k++;
                j = 0;
            }
        }
        i++;
    }
    if (k == 0)
        return (NULL);
    result = malloc((k + 1) * sizeof(char *));
    if (result == NULL)
        return (NULL);
    while (str[l] != '\0')
    {
        if (str[l] != ' ')
        {
            m++;
            if (str[l + 1] == ' ' || str[l + 1] == '\0')
            {
                result[n] = malloc((m + 1) * sizeof(char));
                if (result[n] == NULL)
                {
                    while (n >= 0)
                    {
                        free(result[n]);
                        n--;
                    }
                    free(result);
                    return (NULL);
                }
                n++;
                m = 0;
            }
        }
        l++;
    }
    while (str[o] != '\0')
    {
        if (str[o] != ' ')
        {
            result[p][q] = str[o];
            q++;
            if (str[o + 1] == ' ' || str[o + 1] == '\0')
            {
                result[p][q] = '\0';
                p++;
                q = 0;
            }
        }
        o++;
    }
    result[p] = NULL;
    return (result);
}
