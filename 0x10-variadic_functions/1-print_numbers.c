#include "variadic_functions.h"

/**
 * len_s - check the code
 * @n: param
 *
 * Return: somthing.
 */

int len_s(long n)
{
	int i;

	i = 0;
	if (n == 0)
		return (2);
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i + 1);
}

/**
 * neg_case - check the code
 * @a: param
 *
 * Return: somthing.
 */

char *neg_case(long a)
{
	char *s;
	int count;

	a = -a;
	count = len_s(a) + 1;
	s = (char *)malloc(sizeof(char) * count);
	if (s == 0)
		return (0);
	s[0] = '-';
	s[--count] = 0;
	while (count > 1)
	{
		s[--count] = (a % 10) + 48;
		a = a / 10;
	}
	return (s);
}

/**
 * _itoa - check the code
 * @a: param
 *
 * Return: somthing.
 */

char *_itoa(int a)
{
	char *s;
	int count;

	if (a < 0)
		return (neg_case((long)a));
	count = len_s((long)a);
	if (a >= 0)
	{
		s = (char *)malloc(sizeof(char) * count);
		if (s == 0)
			return (0);
		s[--count] = 0;
	}
	while (count > 0)
	{
		s[--count] = (a % 10) + 48;
		a = a / 10;
	}
	return (s);
}

/**
 * _puts - check the code
 * @str: param
 * @free_it: param
 *
 * Return: ...
 */

void _puts(char *str, int free_it)
{
	int i;

	i = 0;
	while (str && str[i])
	{
		_putchar(str[i]);
		i++;
	}
	if (free_it)
		free(str);
}

/**
 * sum_them_all - check the code
 * @n: param
 *
 * Return: somthing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	i = 0;
	va_start(ap, n);
	while (i < n)
	{
		_puts(_itoa(va_arg(ap, int)), 1);
		if (i + 1 < n && separator)
			_puts((char *)separator, 0);
		i++;
	}
	va_end(ap);
}
