#include "main.h"

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
