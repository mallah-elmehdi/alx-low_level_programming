#include "../main.h"

/**
 * _strcmp - func
 * @s1: param
 * @s2: param
 *
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
