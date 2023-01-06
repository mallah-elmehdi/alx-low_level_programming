#include "hash_tables.h"

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
 * hash_table_create - function that creates a hash table
 *
 * @size: The size of the hash table
 *
 * Return: Returns a pointer to the newly created hash table
 * and NULL If something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	new = _calloc(sizeof(hash_table_t), 1);
	if (new == NULL)
		return (NULL);
	new->array = _calloc(sizeof(hash_node_t *), size + 1);
	new->size = size;
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}
	return (new);
}
