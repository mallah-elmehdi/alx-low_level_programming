#include <stdio.h>

/**
 * _isalpha - function
 * @c: int
 *
 * Return: int
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
