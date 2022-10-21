#include "lists.h"

/**
 * _strlen - check the code
 * @s: param
 *
 * Return: ...
 */

int _strlen(const char *s)
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
 * add_node - check the code
 * @head: param
 * @str: param
 *
 * Return: somthing
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	list_t *temp = *head;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	n->str = strdup(str);
	n->len = _strlen(str);
	n->next = temp;
	*head = n;
	return (n);
}
