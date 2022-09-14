#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - function
 * Return: void
 */

void print_alphabet(void)
{
	int i;

	i = 97;
	while (i < 122)
		_putchar(i);
	_putchar('\n');
}
