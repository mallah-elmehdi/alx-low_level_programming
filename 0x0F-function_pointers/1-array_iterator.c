#include "function_pointers.h"

/**
 * array_iterator - check the code
 * @array: param
 * @size: param
 * @action: param
 *
 * Return: Somthin'.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	while (i < size)
	{
		if (action)
			action(array[i]);
		i++;
	}
}
