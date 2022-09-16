#include "main.h"

/**
 ** print_most_numbers - function
 ** Return: 0
 **/

void print_most_numbers(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		if (i != 50 && i != 52)
			_putchar(i);
	}
	_putchar('\n');
}
