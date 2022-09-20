#include "main.h"
/**
 * print_array - check the code
 * @n: param
 * @a: param
 *
 * Return: ...
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	if (a)
	{
		while (a && n > 0)
		{
			printf("%d", *(a++));
			if (n != 1)
				printf(", ");
			else
				printf("\n");
			n--;
		}
	}
}