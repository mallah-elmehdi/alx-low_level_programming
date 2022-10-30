#include "main.h"

/**
 * clear_bit - check the code
 * @n: param
 * @index: param
 *
 * Return: Always 0.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int pow = ((*n >> index) % 2);
	*n -= pow << index;
	return (1);
}
