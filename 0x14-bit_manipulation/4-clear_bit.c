#include "main.h"

/**
 * get_pow - check the code
 * @index: param
 *
 * Return: ...
 */

unsigned long int get_pow(unsigned int index)
{
	unsigned long int pow = 1;

	while (index--)
		pow *= 2;
	return (pow);
}

/**
 * clear_bit - check the code
 * @n: param
 * @index: param
 *
 * Return: Always 0.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int pow = get_pow(index);

	if (!pow)
		return (-1);
	if (*n)
		*n -= pow;
	return (1);
}
