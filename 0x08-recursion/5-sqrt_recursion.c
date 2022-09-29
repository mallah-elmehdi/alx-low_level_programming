#include "main.h"

int i = 0;

/**
 * _sqrt_recursion - check the code
 * @n: param
 *
 * Return: something
 */

int _sqrt_recursion(int n)
{
	if (i <= n)
	{
		if (i * i == n)
			return (i);
		i++;
		_sqrt_recursion(n);
	}
	return (-1);
}
