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
	if (a)
	{
		while (a && n > 0)
		{
			printf("%d", *(a++));
			if (n != 1)
				printf(", ");
			n--;
		}
	}
	printf("\n");
}
