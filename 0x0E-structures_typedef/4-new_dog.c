#include "dog.h"

/**
 * _calloc - check the code
 * @nmemb: param
 * @size: param
 *
 * Return: somthing.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ret;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ret = malloc(nmemb * size);
	i = 0;
	if (ret == NULL)
		return (NULL);
	while ((unsigned int)i < nmemb * size)
	{
		((unsigned char *)ret)[i] = '\0';
		i++;
	}
	return (ret);
}

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
	if (str == NULL)
		return (NULL);
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

	d = _calloc(sizeof(dog_t), 2);
	if (!d)
		return (NULL);
	d->name = _strdup(name);
	d->age = age;
	d->owner = _strdup(owner);
	return (d);
}
