#include "main.h"

/**
 * main - check the code
 * @argc: param
 * @argv: param
 *
 * Return: something
 */

int main(int argc, char const *argv[])
{
	int change, c25 = 0, c10 = 0, c5 = 0, c2 = 0, c1 = 0;

	if (argc - 1 != 1)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
		printf("0\n");
	else
	{
		change = atoi(argv[1]);
		if (change >= 25)
		{
			c25 = change / 25;
			change = change % 25;
		}
		if (change >= 10)
		{
			c10 = change / 10;
			change = change % 10;
		}
		if (change >= 5)
		{
			c5 = change / 5;
			change = change % 5;
		}
		if (change >= 2)
		{
			c2 = change / 2;
			change = change % 2;
		}
		if (change >= 1)
			c1 = change;

		printf("%d\n", c25 + c10 + c5 + c2 + c1);
	}
	return (0);
}
