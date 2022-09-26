#include "main.h"

/**
 * print_chessboard - func
 * @a: param
 *
 * Return: something.
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	i = 0;
	while (a[i])
	{
		j = 0;
		while (a[i][j])
		{
			write(1, &a[i][j], 1);
			j++;
		}
		i++;
	}
}
