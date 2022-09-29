#include "main.h"

/**
 * get_sqrt - check the code
 * @n: param
 * @i: param
 *
 * Return: something
 */

int get_sqrt(int i, int n)
{
	if (i <= n && i * i == n)
		return (i);
	else if (i > n)
		return (-1);
	return (get_sqrt(i + 1, n));
}

/**
 * _sqrt_recursion - check the code
 * @n: param
 *
 * Return: something
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (get_sqrt(1, n));
}
