#include "../main.h"

/**
 * _puts - check the code
 * @str: param
 *
 * Return: ...
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str && str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
