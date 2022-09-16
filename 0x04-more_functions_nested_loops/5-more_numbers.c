#include "main.h"

/**
 ** more_numbers - func
 ** Return: void
 **/

void more_numbers(void)
{
	int i;
	int n;

	i = 0;
	while (i < 10)
	{
		n = 0;
		while (n <= 14)
		{
			if (n >= 10)
				putchar((n / 10) + 48);
			putchar((n % 10) + 48);
			n++;
		}
		i++;
		putchar('\n');
	}
}
