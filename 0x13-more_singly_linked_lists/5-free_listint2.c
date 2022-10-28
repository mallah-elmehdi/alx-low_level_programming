#include "lists.h"

/**
 * free_listint2 - check the code
 * @head: param
 *
 * Return: somthing
 */

void free_listint2(listint_t **head)
{
	while (*head)
	{
		free(*head);
		*head = (*head)->next;
	}
	head = NULL;
}
