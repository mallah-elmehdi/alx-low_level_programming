#include "dog.h"

/**
 * _strlen - check the code
 * @s: param
 *
 * Return: ...
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

/**
 * _strdup - see the code
 * @str: param
 *
 * Return: Something.
 */

char *_strdup(char *str)
{
	char *ret;
	int i;

	i = 0;
	ret = malloc(_strlen(str) + 1);
	if (ret == NULL)
		return (NULL);
	while (i < _strlen(str))
	{
		ret[i] = str[i];
		i++;
	}
	ret[i] = 0;
	return (ret);
}

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

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	d->name = _strdup(name);
	d->age = age;
	d->owner = _strdup(owner);
	return (d);
}
