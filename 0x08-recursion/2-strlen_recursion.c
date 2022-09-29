#include "main.h"

/**
 * _strlen_recursion - check the code
 * @s: param
 *
 * Return: something
 */

int _strlen_recursion(char *s)
{
	static int i;

	if (*s)
	{
		i++;
		_strlen_recursion(s + 1);
	}
	return (i);
}
