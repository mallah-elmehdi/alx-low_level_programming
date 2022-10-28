#include "lists.h"

/**
 * print_listint - check the code
 * @h: param
 *
 * Return: somthing
 */

size_t print_listint(const listint_t *h)
{
    listint_t *n = (listint_t *)h;
    size_t i = 0;

    while (n)
    {
        printf("%d\n", 0, n->n);
        n = n->next;
        i++;
    }
    return (i);
}
