#include "lists.h"

/**
 * print_list - check the code
 * @h: param
 *
 * Return: somthing
 */

size_t print_list(const list_t *h)
{
	list_t *n = (list_t *)h;
	size_t i = 0;

	while (n)
	{
		printf("[%u] %s\n", n->str ? n->len : 0, n->str ? n->str : "(nil)");
		n = n->next;
		i++;
	}
	return (i);
}
