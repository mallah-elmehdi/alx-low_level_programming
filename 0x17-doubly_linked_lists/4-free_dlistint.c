#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: dlistint_t list head
 *
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
    while (head)
    {
        free(head);
        head = head->next;
    }
}
