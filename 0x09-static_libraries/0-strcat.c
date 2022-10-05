#include "main.h"

/**
 * _strcat - func
 * @dest: param
 * @src: param
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (src[j])
		dest[i++] = src[j++];
	return (dest);
}
