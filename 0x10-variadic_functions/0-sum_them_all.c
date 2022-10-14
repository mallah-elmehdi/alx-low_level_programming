#include "variadic_functions.h"

/**
 * sum_them_all - check the code
 * @n: param
 *
 * Return: somthing.
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list ap;

	sum = 0;
	i = 0;
	va_start(ap, n);
	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (sum);
}
