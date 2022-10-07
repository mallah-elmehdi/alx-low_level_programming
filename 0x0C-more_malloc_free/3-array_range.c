#include "main.h"

/**
 * array_range - check the code
 * @min: param
 * @max: param
 *
 * Return: somthing.
 */

int *array_range(int min, int max)
{
	int *ret;
	int i;

	if (min > max)
		return (NULL);
	i = 0;
	ret = malloc(sizeof(int) * (max - min));
	if (ret == NULL)
		return (NULL);
	while (min <= max)
		ret[i++] = min++;
	return (ret);
}
