#include "hash_tables.h"

/**
 * hash_table_delete - prints a hash table
 *
 * @ht: hash table
 *
 * Return: void
 **/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long i;
	hash_node_t *node;
	hash_node_t *next_node;

	i = 0;
	if (ht)
	{
		while (i < ht->size)
		{
			node = ht->array[i];
			while (node)
			{
				free(node->key);
				free(node->value);
				next_node = node->next;
				free(node);
				node = next_node;
			}
			i++;
		}
		free(ht->array);
		free(ht);
	}
}
