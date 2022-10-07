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
 * string_nconcat - check the code
 * @s1: param
 * @s2: param
 * @n: param
 *
 * Return: somthing.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ret;
	int length;
	int i;
	int j;

	if (n > (unsigned int)_strlen(s2))
		length = _strlen(s1) + _strlen(s2) + 1;
	else
		length = _strlen(s1) + n + 1;
	i = 0;
	j = 0;
	ret = malloc(length);
	if (ret == NULL)
		return (NULL);
	while (s1 && s1[i])
		ret[j++] = s1[i++];
	i = 0;
	while (s2 && s2[i] && n--)
		ret[j++] = s2[i++];
	ret[j] = '\0';
	return (ret);
}
