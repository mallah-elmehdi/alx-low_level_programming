#include "main.h"

/**
 ** more_numbers - func
 ** Return: void
 **/

void more_numbers(void)
{
	int i;
	int n;
	int a;

	i = 0;
	while (i < 10)
	{
		n = 48;
		while (n <= 57)
		{
			_putchar(n);
			if (n == 57)
			{
				a = 48;
				while (a <= 52)
				{
					_putchar(49);
					_putchar(a);
					a++;
				}
			}
			n++;
		}
		i++;
		_putchar('\n');
	}
}
