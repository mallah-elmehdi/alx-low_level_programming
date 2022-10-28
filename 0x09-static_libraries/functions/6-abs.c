#include <stdio.h>
#include "../main.h"

/**
 * _abs - function
 * @n: int
 *
 * Return: int
 */

int _abs(int n)
{
	int sign;

	sign = 0;
	if (n < 0)
		sign = -1;
	if (n > 0)
		sign = 1;
	return (n * sign);
}
