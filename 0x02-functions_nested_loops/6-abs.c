#include <stdio.h>
#include "main.h"

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

/**
 * _abs - function
 * @n: int
 *
 * Return: int
 */

int _abs(int n)
{
	return (n * print_sign(n));
}
