#include "main.h"

/**
 * _strlen - check the code
 * @s: param
 *
 * Return: ...
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s && s[i])
	{
		i++;
	}
	return (i);
}

/**
 * str_concat - see the code
 * @s1: param
 * @s2: param
 *
 * Return: Something.
 */

char *str_concat(char *s1, char *s2)
{
	char *ret;
	int i;
	int j;

	i = 0;
	j = 0;
	ret = malloc(_strlen(s1) + _strlen(s2) + 1);
	if (ret == NULL)
		return (NULL);
	while (i < _strlen(s1))
	{
		ret[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (i < _strlen(s1) + _strlen(s2))
	{
		ret[i] = s2[j];
		i++;
		j++;
	}
	ret[i] = 0;
	return (ret);
}
