#include "main.h"

/**
 ** print_str - func
 ** @str: param
 **
 ** Return: void
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
 ** fizz_buzz - func
 ** Return: void
 **/

void fizz_buzz(void)
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
}
