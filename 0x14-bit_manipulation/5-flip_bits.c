#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits you would need to flip
 * to get from one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m){
    unsigned long int i = 1;
    unsigned int count = 0;

    while (i <= n)
    {
        i <<= 1;
        count++;
    }
    while (count > 0)
    {
        i >>= 1;
        if ((n & i) != (m & i))
            count++;
        count--;
    }
    return (count);
}
