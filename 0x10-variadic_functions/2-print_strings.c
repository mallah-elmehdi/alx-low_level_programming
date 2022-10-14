#include "variadic_functions.h"

/**
 * print_strings - check the code
 * @separator: param
 * @n: param
 *
 * Return: somthing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *tmp;

	i = 0;
	va_start(ap, n);
	while (i < n)
	{
		tmp = va_arg(ap, char *);
		if (tmp)
			printf("%s", tmp);
		else
			printf("(nil)");
		if (i + 1 < n && separator)
			printf("%s", separator);
		i++;
	}
	va_end(ap);
}
