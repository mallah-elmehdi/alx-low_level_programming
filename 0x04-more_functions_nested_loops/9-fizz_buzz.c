#include "main.h"
#include <stdio.h>

/**
 ** print_str - func
 ** @str: string
 **
 ** Return: 0
 **/

void print_str(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
}

/**
 ** main - func
 ** Return: 0
 **/

int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			print_str("FizzBuzz");
		else if (i % 3 == 0)
			print_str("Fizz");
		else if (i % 5 == 0)
			print_str("Buzz");
		else
		{
			if (i >= 10)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
			}
			else
				putchar(i + 48);
		}
		if (i != 100)
			putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
