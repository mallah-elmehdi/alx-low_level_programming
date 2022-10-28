#include "../main.h"

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
	return (0);
}
