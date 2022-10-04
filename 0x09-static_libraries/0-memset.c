#include "main.h"

/**
 * _memset - func
 * @s: param
 * @b: param
 * @n: param
 *
 * Return: something.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *p;
	size_t i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)b;
		i++;
	}
	return (s);
}
