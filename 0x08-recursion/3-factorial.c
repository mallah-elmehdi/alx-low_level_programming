#include "main.h"

/**
 * factorial - check the code
 * @n: param
 *
 * Return: something
 */

int factorial(int n)
{
	int i = 1;

	if (n > 0)
		return (n * factorial(n - 1));
	else if (n < 0)
		return (-1);
	return (1);
}
