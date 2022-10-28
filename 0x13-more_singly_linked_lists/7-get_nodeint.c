#include "lists.h"

/**
 * get_nodeint_at_index - check the code
 * @head: param
 * @index: param
 *
 * Return: somthing
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head && index)
	{
		head = head->next;
		index--;
	}
	if (index)
		return (NULL);
	return (head);
}
