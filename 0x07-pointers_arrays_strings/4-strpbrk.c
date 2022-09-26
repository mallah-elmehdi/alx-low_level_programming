#include "main.h"

/**
 * _strpbrk - func
 * @s: param
 * @accept: param
 *
 * Return: something.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	i = 0;
	while (accept[i])
	{
		j = 0;
		while (s[j])
		{
			if (s[j] == accept[i])
				return (s + j);
			j++;
		}
		i++;
	}
	return (NULL);
}
