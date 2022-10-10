#include "dog.h"

/**
 * new_dog - check the code
 * @name: param
 * @age: param
 * @owner: param
 *
 * Return: somthing.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	
	d = malloc(sizeof(dog_t) * 2);
	if (!d)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
