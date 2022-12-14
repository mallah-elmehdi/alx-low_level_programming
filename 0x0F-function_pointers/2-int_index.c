#include "function_pointers.h"

/**
 * int_index - check the code
 * @array: param
 * @size: param
 * @cmp: param
 *
 * Return: Somthin'.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (size <= 0)
		return (-1);
	while (array && i < size)
	{
		if (cmp && cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
