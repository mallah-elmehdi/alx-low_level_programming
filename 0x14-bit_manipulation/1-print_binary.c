#include "main.h"

/**
 * get_pow - check the code
 * @n: param
 *
 * Return: ...
 */

int get_pow(unsigned long int n)
{
	int i = 1;
	unsigned long int pow = 1;

	while (1)
	{
		if (n < pow * 2)
			break;
		pow *= 2;
		i++;
	}
	return (i);
}

/**
 * print_01 - check the code
 * @n: param
 * @i: param
 *
 * Return: ...
 */

unsigned long int print_01(unsigned long int n, int i)
{
	unsigned long int pow = 1;

	while (--i)
		pow *= 2;
	if (n < pow)
	{
		_putchar('0');
		return (0);
	}
	_putchar('1');
	return (pow);
}

/**
 * print_binary - check the code
 * @n: param
 *
 * Return: Always 0.
 */

void print_binary(unsigned long int n)
{
	int i = get_pow(n);

	while (i)
	{
		n -= print_01(n, i);
		i--;
	}
}
