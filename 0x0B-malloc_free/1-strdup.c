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
	while (s[i])
	{
		i++;
	}
	return (i);
}

/**
 * _strdup - see the code
 * @str: param
 *
 * Return: Something.
 */

char *_strdup(char *str)
{
	char *ret;
	int i;

	i = 0;
	ret = malloc(_strlen(str) + 1);
	if (ret == NULL)
		return (NULL);
	while (i < _strlen(str))
	{
		ret[i] = str[i];
		i++;
	}
	ret[i] = 0;
	return (ret);
}
