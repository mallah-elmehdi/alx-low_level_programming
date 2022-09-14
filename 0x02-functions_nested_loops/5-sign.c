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
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar(48);
		return (0);
	}
	_putchar('-');
	return (-1);
}
