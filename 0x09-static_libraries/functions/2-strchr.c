#include "../main.h"

/**
 * _strchr - func
 * @s: param
 * @c: param
 *
 * Return: something.
 */

char *_strchr(char *s, char c)
{
	unsigned int i;
	char *p;

	i = 0;
	p = (char *)s;
	while (i <= (unsigned int)_strlen(s))
	{
		if (p[i] == (char)c)
			return (&p[i]);
		i++;
	}
	return (0);
}
