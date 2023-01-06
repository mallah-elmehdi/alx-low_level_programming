#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: hash table
 *
 * Return: void
 **/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long i;
	hash_node_t *node;
	int is_first;

	i = 0;
	is_first = 1;
	printf("{");
	if (ht && ht->array)
	{
		while (i < ht->size)
		{
			node = ht->array[i];
			while (node)
			{
				if (is_first)
					is_first = 0;
				else
					printf(", ");
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
			}
			i++;
		}
	}
	printf("}\n");
}
