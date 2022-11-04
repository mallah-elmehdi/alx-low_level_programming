#include "main.h"

/**
 * wildcmp - check the code
 * @s1: param
 * @s2: param
 *
 * Return: something
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (!*s2 && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (!*s2);
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
