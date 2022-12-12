#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head: dlistint_t list head
 * @index: index
 *
 * Return: the node does not exist, return NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;

	while (temp && index)
	{
		temp = temp->next;
		index--;
	}
	if (index)
		return (NULL);
	return (temp);
}
