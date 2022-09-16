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
		_putchar(str[i]);
		i++;
	}
}

/**
 ** main - func
 ** Return: void
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
				_putchar((i / 10) + 48);
				_putchar((i % 10) + 48);
			}
			else
				_putchar(i + 48);
		}
		if (i != 100)
			_putchar(' ');
		i++;
	}
	_putchar('\n');
	retirn (0);
}
