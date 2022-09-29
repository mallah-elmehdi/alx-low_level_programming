#include "main.h"

/**
 * _pow_recursion - check the code
 * @x: param
 * @y: param
 *
 * Return: something
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
		return x * _pow_recursion(x, y - 1);
	else if (y == 0)
		return (1);
	return (-1);
}
