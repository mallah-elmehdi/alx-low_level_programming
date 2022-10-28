#include "lists.h"

/**
 * free_listint - check the code
 * @head: param
 *
 * Return: somthing
 */

void free_listint(listint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
