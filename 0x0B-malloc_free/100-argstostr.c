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
 * argstostr - see the code
 * @sc: param
 * @av: param
 *
 * Return: Something.
 */

char *argstostr(int ac, char **av)
{
	char *ret;
	int j;
	int i;
	int k;
	int len;

	i = 0;
	len = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
		len += _strlen(av[i++]) + 1;
	i = 0;
	j = 0;
	ret = malloc(len + 1);
	if (ret == NULL)
		return (NULL);
	while (i < len)
	{
		k = 0;
		while (av[j][k])
			ret[i++] = av[j][k++];
		ret[i++] = '\n';
		j++;
	}
	ret[i] = 0;
	return (ret);
}
