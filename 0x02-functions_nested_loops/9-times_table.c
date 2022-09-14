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
			if (ret < 10)
				_putchar(ret + 48);
			else
			{
				_putchar((ret / 10) + 48);
				_putchar((ret % 10) + 48);
			}
			if (h != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			h++;
		}
		w++;
		_putchar('\n');
	}
}
