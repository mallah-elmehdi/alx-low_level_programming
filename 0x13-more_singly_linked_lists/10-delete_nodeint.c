#include "lists.h"

/**
 * delete_nodeint_at_index - check the code
 * @head: param
 * @index: param
 *
 * Return: somthing
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *new;

	temp = *head;
	while (temp && index)
	{
		temp = temp->next;
		index--;
	}
	if (index)
		return (-1);
	free(temp);
	return (1);
}
