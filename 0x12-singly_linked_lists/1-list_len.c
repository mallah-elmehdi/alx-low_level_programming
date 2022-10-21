#include "lists.h"

/**
 * list_len - check the code
 * @h: param
 *
 * Return: somthing
 */

size_t list_len(const list_t *h)
{
	list_t *n = (list_t *)h;
	size_t i = 0;

	while (n)
	{
		n = n->next;
		i++;
	}
	return (i);
}
