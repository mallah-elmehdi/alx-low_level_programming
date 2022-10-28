#include "lists.h"

/**
 * insert_nodeint_at_index - check the code
 * @head: param
 * @idx: param
 * @n: param
 *
 * Return: somthing
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new, *prv;

	temp = *head;
	while (temp && idx)
	{
		prv = temp;
		temp = temp->next;
		idx--;
	}
	if (idx)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = temp;
	prv->next = new;
	return (new);
}
