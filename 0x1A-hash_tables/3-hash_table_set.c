#include "hash_tables.h"

/**
 * create_hash_node - create hade node
 *
 * @key: the key
 * @value: is the size of the array of the hash table
 *
 * Return: hash node or NULL
 **/

hash_node_t *create_hash_node(const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (NULL);
	new->key = strdup(key);
	new->value = strdup(value);
	return (new);
}

/**
 * update_node - update the hash table at the index index
 *
 * @node: hash table head at the index index
 * @key: the key
 * @value: is the size of the array of the hash table
 *
 * Return: 1 if it succeeded, 0 otherwise
 **/

int update_node(hash_node_t *node, const char *key, const char *value)
{
	while (node)
	{
		if (!node->key)
		{
			node->key = strdup(key);
			node->value = strdup(value);
			return (1);
		}
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}
	return (0);
}

/**
 * hash_table_set - function that adds an element to the hash table
 *
 * @ht: hash table
 * @key: the key
 * @value: is the size of the array of the hash table
 *
 * Return: 1 if it succeeded, 0 otherwise
 **/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;
	hash_node_t *new_node;

	if (!ht || !key || !strlen(key) || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (0);

	if (!ht->array[index])
	{
		ht->array[index] = create_hash_node(key, value);
		if (!ht->array[index])
			return (0);
		return (1);
	}

	node = ht->array[index];
	if (update_node(node, key, value))
		return (1);

	new_node = create_hash_node(key, value);
	if (!new_node)
		return (0);

	new_node->next = node;
	ht->array[index] = new_node;
	return (1);
}
