#include "main.h"
#include <stdio.h>

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
			prinf("FizzBuzz");
		else if (i % 3 == 0)
			prinf("Fizz");
		else if (i % 5 == 0)
			prinf("Buzz");
		else
			prinf("Buzz");
		if (i != 100)
			prinf("");
		i++;
	}
	prinf("\n");
	return (0);
}
