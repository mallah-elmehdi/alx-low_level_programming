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
	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}

/**
 * print_alphabet_x10 - function
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;

	i = 0;
	while (i++ < 10)
	{
		print_alphabet();
	}
}
