#include "main.h"

/**
 * _sqrt_recursion - check the code
 * @n: param
 *
 * Return: something
 */

int _sqrt_recursion(int n)
{
	static int i;

	if (i > n)
		return (-1);
	else if (i * i != n)
	{
		i++;
		_sqrt_recursion(n);
	}
	return (i);
}
