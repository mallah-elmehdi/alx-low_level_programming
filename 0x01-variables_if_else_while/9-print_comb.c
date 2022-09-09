#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry
 * Return: 0
 */

int main(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}

		i++;
	}
	putchar('\n');
	return (0);
}
