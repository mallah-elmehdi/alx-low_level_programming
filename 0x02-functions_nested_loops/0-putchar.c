#include <stdio.h>
#include "main.h"

/**
 * main - the main function
 * Return: 0
 */

int main(void)
{
	char str[] = "_putchar\n";
	int i;

	i = 0;
	while (str[i])
		_putchar(str[i++]);
	return (0);
}
