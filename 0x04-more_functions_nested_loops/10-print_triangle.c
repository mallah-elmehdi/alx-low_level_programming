#include "main.h"

/**
 ** print_triangle - func
 ** @n: param
 **
 ** Return: void
 **/

void print_triangle(int n)
{
	int i;
	int j;
	int k;

	j = 0;
	while (j < n)
	{
		k = j + 1;
		i = n - k;
		while (k < n)
		{
			_putchar(' ');
			k++;
		}
		while (i < n)
		{
			_putchar('#');
			i++;
		}
		_putchar('\n');
		j++;
	}
	if (n <= 0)
		_putchar('\n');
}
