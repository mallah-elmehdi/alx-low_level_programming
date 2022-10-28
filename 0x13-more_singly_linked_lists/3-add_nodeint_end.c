#include "lists.h"

/**
 * add_nodeint_end - check the code
 * @head: param
 * @n: param
 *
 * Return: somthing
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *temp = *head;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (*head == NULL)
		*head = node;
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = node;
	}
	return (*head);
}
