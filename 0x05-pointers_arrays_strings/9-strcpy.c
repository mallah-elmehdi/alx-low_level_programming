#include "main.h"
/**
 * _strcpy - check the code
 * @dest: param
 * @src: param
 *
 * Return: ...
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int o;

	o = _strlen(src);
	i = 0;
	while (src && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
