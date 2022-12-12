#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * @head: dlistint_t list head
 * @index: index
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next)
			(*head)->next->prev = (*head)->prev;
		*head = (*head)->next;
	}
	while (temp && index)
	{
		temp = temp->next;
		index--;
	}
	if (index)
		return (-1);
	if (temp->prev)
		temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;
	return (1);
}
