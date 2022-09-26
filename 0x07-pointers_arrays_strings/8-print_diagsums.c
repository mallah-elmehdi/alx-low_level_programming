#include "main.h"

/**
 * print_diagsums - func
 * @a: param
 * @size: param
 *
 * Return: something.
 */

void print_diagsums(int *a, int size)
{
	int i;
	int d1;
	int d2;

	i = 0;
	d1 = 0;
	d2 = 0;
	while (i < size)
	{
		d1 += a[i];
		d1 += a[size - 1 - i];
		i++;
		a++;
	}
	printf("%d, %d\n", d1, d2);
}
