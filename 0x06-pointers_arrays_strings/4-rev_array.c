#include "main.h"

/**
 * reverse_array - func
 * @a: param
 * @n: param
 *
 * Return: Always 0.
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	i = 0;
	while (--n > i)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
	}
	return (0);
}
