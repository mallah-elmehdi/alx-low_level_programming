#ifndef _FUNCTION_LIKE_MACRO_H
#define _FUNCTION_LIKE_MACRO_H

/**
 * _abs - check the code
 * @n: param
 *
 * Return: something
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

#define ABS(x) (_abs(x))

#endif
