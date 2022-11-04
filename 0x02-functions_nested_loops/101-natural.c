#include "main.h"

/**
 * main - function
 *
 * Return: som
 */

int main(void)
{
	int i = 0;
	int sum = 0;
	int count = 6;
	char buff[6];

	while (i < 1024)
	{
		if (i % 3 == 0)
			sum += i;
		else if (i % 5 == 0)
			sum += i;
		i++;
	}
	while (count > 0)
	{
		buff[--count] = (sum % 10) + 48;
		sum = sum / 10;
	}
	while (count < 6)
		putchar(buff[count++]);
	putchar('\n');
	return (1);
}
