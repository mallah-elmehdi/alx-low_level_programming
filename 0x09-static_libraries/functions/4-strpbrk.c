#include "../main.h"

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
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (accept[j] == s[i])
				return (s + i);
			j++;
		}
		i++;
	}
	return (0);
}
