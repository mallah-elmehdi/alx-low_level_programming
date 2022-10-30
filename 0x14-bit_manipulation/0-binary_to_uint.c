#include "main.h"

/**
 * _strlen - check the code
 * @s: param
 *
 * Return: ...
 */

int _strlen(const char *s)
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
 * binary_to_uint - check the code
 * @b: param
 *
 * Return: Always 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ret = 0;
	unsigned int pow = 1;
	int i = _strlen(b);

	while (i)
	{
		i--;
		if (b[i] != '1' && b[i] != '0')
			return (0);
		ret += (b[i] - 48) * pow;
		pow *= 2;
	}
	return (ret);
}
