#include "main.h"

/**
 * _sqrt_recursion - check the code
 * @n: param
 *
 * Return: something
 */

int _sqrt_recursion(int n)
{
	static int i = 0;

	if (i <= n)
	{
		if (i * i == n)
			return (i);
		i++;
		_sqrt_recursion(n);
	}
	return (-1);
}
