#include <stdio.h>

/**
 * print_sign - function
 * @c: int
 *
 * Return: int
 */

int print_sign(int c)
{
	if (c > 0)
		return (1);
	else if (c == 0)
		return (0);
	return (-1);
}
