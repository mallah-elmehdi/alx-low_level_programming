#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - function
 * @c :int
 * Return: int
 */

int print_last_digit(int c)
{
	long ret;
	long m;

	m = c;
	if (m < 0)
		m = -m;
	ret = m % 10;
	_putchar(48 + (int)ret);
	return ((int)ret);
}
