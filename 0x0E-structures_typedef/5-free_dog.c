#include "dog.h"

/**
 * free_dog - check the code
 * @d: param
 *
 * Return: somthing.
 */

void free_dog(dog_t *d)
{
	if (d)
		free(d);
}
