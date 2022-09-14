#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - function
 * Return: void
 */

void jack_bauer(void)
{
	int m;
	int h;

	h = 0;
	while (h <= 23)
	{
		if (h < 10)
		{
			_putchar(48);
			_putchar(48 + h);
		}
		else
		{
			_putchar((m / 10) + 48);
			_putchar((m % 10) + 48);
		}
		_putchar(':');
		m = 0;
		while (m <= 59)
		{
			if (m < 10)
			{
				_putchar(48);
				_putchar(m + 48);
			}
			else
			{
				_putchar((m / 10) + 48);
				_putchar((m % 10) + 48);
			}
			m++;
		}
		h++;
		_putchar('\n');
	}
}
