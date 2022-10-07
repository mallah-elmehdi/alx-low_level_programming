#include "main.h"

/**
 * malloc_checked - check the code
 * @b: param
 *
 * Return: somthing.
 */

void *malloc_checked(unsigned int b)
{
	void *ret;

	ret = malloc(b);
	if (ret == NULL)
	{
		exit(98);
	}
	return (ret);
}
