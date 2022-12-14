#include "main.h"

/**
 * _strncpy - func
 * @dest: param
 * @src: param
 * @n: param
 *
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] && n-- > 0)
	{
		dest[i] = src[i];
		i++;
	}
	while (n-- > 0)
		dest[i++] = 0;
	return (dest);
}
