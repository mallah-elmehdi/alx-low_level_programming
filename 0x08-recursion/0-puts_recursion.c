#include "main.h"

/**
 * _puts_recursion - check the code
 * @s: param
 *
 * Return: something
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		putchar('\n');
	}
}
