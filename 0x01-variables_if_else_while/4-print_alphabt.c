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

	i = 97;
	while (i <= 122)
	{
		if (i != 101 && i != 113)
			putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
