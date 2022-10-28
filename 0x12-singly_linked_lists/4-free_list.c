#include "lists.h"

/**
 * free_list - check the code
 * @head: param
 *
 * Return: somthing
 */

void free_list(list_t *head)
{
	while (head)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
