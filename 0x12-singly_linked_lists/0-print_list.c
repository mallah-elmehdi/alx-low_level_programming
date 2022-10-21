#include "lists.h"

/**
 * print_list - check the code
 * @h: param
 *
 * Return: somthing
 */

size_t print_list(const list_t *h)
{
	list_t *node = (list_t *)h;
	size_t i = 0;

	while (node)
	{
		printf("[%u] %s\n", node->len, node->str ? node->str : "(nil)");
		node = node->next;
		i++;
	}
	return (i);
}
