#include "../main.h"

/**
 * _strspn - func
 * @s: param
 * @accept: param
 *
 * Return: something.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int ret;

	i = 0;
	ret = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				ret++;
				break;
			}
			j++;
			if (accept[j] == '\0')
				return (ret);
		}
		i++;
	}
	return (ret);
}
