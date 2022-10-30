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
	unsigned long int temp = *n >> index;

	if (temp == 0)
		return (-1);
	*n -= (temp % 2) << index;
	return (1);
}
