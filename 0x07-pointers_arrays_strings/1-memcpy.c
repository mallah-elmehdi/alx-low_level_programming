#include "main.h"

/**
 * _memcpy - func
 * @dest: param
 * @src: param
 * @n: param
 *
 * Return: something.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned char *p0;
	unsigned char *p1;

	i = 0;
	p0 = (unsigned char *)dest;
	p1 = (unsigned char *)src;
	if (p0 == p1)
		return ((char *)p0);
	if (p0 == NULL && p1 == NULL)
		return (dest);
	while (i < n)
	{
		p0[i] = p1[i];
		i++;
	}
	return (dest);
}
