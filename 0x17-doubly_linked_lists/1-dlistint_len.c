#include "lists.h"

/**
 * dlistint_len - counts the number of nodes in the linked list
 * @h: pointer to the beginning of a linked list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t f;

	for (f = 0; h != NULL; f++)
		h = h->next;
	return (f);
}
