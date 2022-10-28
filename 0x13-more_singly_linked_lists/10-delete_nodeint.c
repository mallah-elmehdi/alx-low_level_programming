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
	listint_t *temp, *prv;

	if (head == NULL)
		return (-1);
	temp = head ? *head : NULL;
	prv = NULL;
	while (temp && index)
	{
		prv = temp;
		temp = temp->next;
		index--;
	}
	if (index)
		return (-1);
	if (prv)
		prv->next = temp->next;
	else if (temp)
		*head = temp->next;
	free(temp);
	return (1);
}
