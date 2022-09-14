#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - function
 * @c :int
 * Return: int
 */

int print_last_digit(int c)
{
	int ret;

	ret = _abc(c) % 10;
	_putchar(48 + ret);
	return (ret);
}
