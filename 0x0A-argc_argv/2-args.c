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
	int i;

	i = 0;
	while (i < argc)
		printf("%d\n", argv[i++]);
	return (0);
}
