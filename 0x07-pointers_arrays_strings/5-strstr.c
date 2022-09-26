#include "main.h"

/**
 * _strlen - func
 * @str: param
 *
 * Return: something.
 */

int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

/**
 * _strstr - func
 * @haystack: param
 * @needle: param
 *
 * Return: something.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i;
	unsigned int a;

	i = 0;
	if (_strlen(needle) == 0)
		return ((char *)haystack);
	while (haystack[i])
	{
		a = 0;
		while (haystack[i + a] == needle[a])
		{
			a++;
			if (needle[a] == '\0')
				return (&((char *)haystack)[i]);
		}
		i++;
	}
	return (NULL);
}
