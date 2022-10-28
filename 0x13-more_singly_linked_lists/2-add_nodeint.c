#include "lists.h"

/**
 * add_nodeint - check the code
 * @head: param
 * @n: param
 *
 * Return: somthing
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *temp = *head;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = temp;
	*head = node;
	return (node);
}
