#include "lists.h"

/**
 * free_listint - check the code
 * @head: param
 *
 * Return: somthing
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head;
	while (temp)
	{
		temp = head->next;
		free(head);
	}
}
