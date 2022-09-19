#include "main.h"
/**
 * print_rev - check the code
 * @s: param
 *
 * Return: ...
 */

void print_rev(char *s)
{
	int i;

	i = _strlen(s);
	while (i > 0)
	{
		write(1, &s[i - 1], 1);
		i--;
	}
}
