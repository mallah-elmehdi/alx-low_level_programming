#include "main.h"

/**
 * _strlen_recursion - check the code
 * @s: param
 *
 * Return: something
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
