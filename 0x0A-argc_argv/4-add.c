#include "main.h"

/**
 * is_all_digit - check the code
 * @str: param
 *
 * Return: something
 */

int is_all_digit(char const *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - check the code
 * @argc: param
 * @argv: param
 *
 * Return: something
 */

int main(int argc, char const *argv[])
{
	unsigned int sum;
	int i;

	sum = 0;
	i = 1;
	while (i < argc)
	{
		if (is_all_digit(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%u\n", sum);
	return (0);
}
