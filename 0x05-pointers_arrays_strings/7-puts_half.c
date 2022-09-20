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
 * _puts - check the code
 * @str: param
 *
 * Return: ...
 */

void _puts(char *str)
{
	if (str)
	{
		write(1, str, _strlen(str));
		write(1, "\n", 1);
	}
}

/**
 * puts_half - check the code
 * @str: param
 *
 * Return: ...
 */

void puts_half(char *str)
{
	int i;

	i = _strlen(str);
	if (str)
	{
		if (i % 2)
			i++;
		_puts(str + (i / 2));
	}
}
