#include "lists.h"

/**
 * listint_len - check the code
 * @h: param
 *
 * Return: somthing
 */

size_t listint_len(const listint_t *h)
{
	listint_t *n = (listint_t *)h;
	size_t i = 0;

	while (n)
	{
		n = n->next;
		i++;
	}
	return (i);
}
