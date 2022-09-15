#include <stdio.h>
#include "main.h"

/**
 * _print - function
 * @n: int
 *
 * Return: void
 */

void _print(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n >= 100)
	{
		_putchar((n / 100) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n >= 10)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else
		_putchar(n + '0');
	if (n != 98)
	{
		_putchar(',');
		_putchar(' ');
	}
}

/**
 * print_to_98 - function
 * @n: int
 *
 * Return: void
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		_print(n);
		if (n > 98)
			n--;
		else
			n++;
	}
	_print(n);
	_putchar('\n');
}
