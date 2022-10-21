#include "lists.h"

/**
 * print_list - check the code
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
		if (n->str)
			printf("[%u] %s\n", n->len, n->str);
		else
			printf("[%u] %s\n", 0, "(nil)");
		n = n->next;
		i++;
	}
	return (i);
}
