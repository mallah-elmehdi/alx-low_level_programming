#include "main.h"

/**
 * get_bit - check the code
 * @n: param
 * @index: param
 *
 * Return: Always 0.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if ((int)index < 0)
		return (0);
	return ((n >> index) % 2);
}
