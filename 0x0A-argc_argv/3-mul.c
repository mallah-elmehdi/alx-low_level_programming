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
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%ld\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
