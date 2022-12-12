#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n)
 * @head: dlistint_t list head
 *
 * Return: if the list is empty, return 0 or sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
