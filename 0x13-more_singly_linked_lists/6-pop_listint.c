#include "lists.h"

/**
 * pop_listint - check the code
 * @head: param
 *
 * Return: somthing
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int ret = 0;

	if (*head)
	{
		ret = temp->n;
		*head = (*head)->next;
		free(temp);
	}
	return (ret);
}
