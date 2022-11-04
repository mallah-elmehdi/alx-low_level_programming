#include "main.h"

/**
 * _print - function
 * @n: int
 *
 * Return: void
 */

void _print(int n, int is_first)
{
	if (n >= 100)
	{
		if (!is_first)
		{
			_putchar(',');
			_putchar(' ');
		}
		_putchar((n / 100) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n >= 10)
	{
		if (!is_first)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else
	{
		if (!is_first)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar(n + '0');
	}
}

/**
 * _abs - function
 * @n: int
 *
 * Return: int
 */

void print_times_table(int n)
{
	int i = 0;
	int j;
	int is_first;

	if (n > 15 || n < 0)
		return;
	while (i <= n)
	{
		j = 0;
		while (j <= n)
		{
			is_first = (j == 0) ? 1 : 0;
			_print(i * j, is_first);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
