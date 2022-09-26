#include "main.h"

/**
 * _strspn - func
 * @s: param
 * @accept: param
 *
 * Return: something.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	i = 0;
	while (s[i] && accept[i])
	{
		if (s[i] != accept[i])
			break;
		i++;
	}
	return (i);
}
