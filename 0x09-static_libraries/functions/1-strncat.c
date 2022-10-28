#include "../main.h"

/**
 * _strncat - func
 * @dest: param
 * @src: param
 * @n: param
 *
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = _strlen(dest);
	j = 0;
	while (src[j] && n--)
		dest[i++] = src[j++];
	return (dest);
}
