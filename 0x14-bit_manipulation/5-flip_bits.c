#include "main.h"

/**
 * flip_bits - check the code
 * @m: param
 * @n: param
 *
 * Return: ...
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned int i = 0;
    unsigned int index = 32;
    unsigned long int _n;
    unsigned long int _m;

    while (index)
    {
        _n = n << index;
        _m = m << index;
        if (_n != _m)
        {
            n = ~n;
            i++;
        }
        printf("n = %lu\n", n);
        printf("m = %lu\n", m);
        index--;
    }
    return (i);
}
