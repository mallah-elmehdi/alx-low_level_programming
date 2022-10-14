#include "variadic_functions.h"

/**
 * print_numbers - check the code
 * @separator: param
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
		printf("%f", va_arg(ap, float));
		if (i + 1 < n && separator)
			printf("%s", separator);
		i++;
	}
	va_end(ap);
}
