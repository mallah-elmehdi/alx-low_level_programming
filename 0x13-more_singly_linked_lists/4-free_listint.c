#include "lists.h"

/**
 * free_listint - check the code
 * @head: param
 *
 * Return: somthing
 */

void free_listint(listint_t *head)
{
	if (head)
		free_listint(head->next);
	free(head);
}
