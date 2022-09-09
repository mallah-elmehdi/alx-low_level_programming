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

	i = 122;
	while (i >= 97)
		putchar(i--);
	putchar('\n');
	return (0);
}
