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
		d1 += a[(i * size) + i];
		d2 += a[size + (size * i) - i - 1];
		i++;
	}
	printf("%d, %d\n", d1, d2);
}
