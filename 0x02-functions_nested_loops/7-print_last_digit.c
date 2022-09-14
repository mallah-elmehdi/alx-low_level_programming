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

long _abs_long(int n)
{
	return (n * print_sign(n));
}

/**
 * print_last_digit - function
 * @c :int
 * Return: int
 */

int print_last_digit(int c)
{
	int ret;

	ret = _abs_long(c) % 10;
	_putchar(48 + ret);
	return (ret);
}
