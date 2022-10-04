#include "main.h"

/**
 * _strchr - func
 * @s: param
 * @c: param
 *
 * Return: something.
 */

char *_strchr(char *s, char c)
{
	size_t i;
	char *p;

	i = 0;
	p = (char *)s;
	while (i <= (size_t)_strlen(s))
	{
		if (p[i] == (char)c)
			return (&p[i]);
		i++;
	}
	return (NULL);
}
