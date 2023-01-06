#include "hash_tables.h"

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

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);
	new->array = malloc(sizeof(hash_node_t *) * size);
	new->size = size;
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}
	return (new);
}
