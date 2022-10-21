#include "lists.h"

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

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	n->str = str;
	n->next = *head;
	return (n);
}
