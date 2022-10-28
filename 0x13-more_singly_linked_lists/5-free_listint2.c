#include "lists.h"

/**
 * free_listint2 - check the code
 * @head: param
 *
 * Return: somthing
 */

void free_listint2(listint_t **head)
{
	if (head && *head)
	{
		free_listint2(&(*head)->next);
		free(*head);
		*head = NULL;
	}
}
