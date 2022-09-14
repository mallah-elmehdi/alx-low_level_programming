#include <stdio.h>
#include "main.h"

/**
 * times_table - function
 * Return: void
 */

void times_table(void)
{
	int w;
	int h;
	int ret;

	w = 0;
	while (w <= 9)
	{
		h = 0;
		while (h <= 9)
		{
			ret = w * h;
			if (h != 0)
			{
				_putchar(',');
				if (ret >= 10)
					_putchar(' ');
				else
				{
					_putchar(' ');
					_putchar(' ');
				}
			}
			if (ret < 10)
				_putchar(ret + 48);
			else
			{
				_putchar((ret / 10) + 48);
				_putchar((ret % 10) + 48);
			}
			h++;
		}
		w++;
		_putchar('\n');
	}
}
