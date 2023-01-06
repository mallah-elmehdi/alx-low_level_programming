#include "hash_tables.h"

/**
 * hash_table_get - create hade node
 *
 * @ht: hash table
 * @key: the key
 *
 * Return: hash value string or NULL
 **/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long i;
	hash_node_t *node;

	i = 0;
	if (!ht || !key || !strlen(key))
		return (NULL);
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node)
		{
			if (strcmp(node->key, key) == 0)
				return (node->value);
			node = node->next;
		}
		i++;
	}
	return (NULL);
}
