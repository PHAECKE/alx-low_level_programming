#include "lists.h"
/**
 * find_listint_loop - finds the loop contained in
 * a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 * otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *frnt, *stp;

	if (head == NULL || head->next == NULL)
		return (NULL);

	frnt = head->next;
	stp = (head->next)->next;

	while (stp)
	{
		if (frnt == stp)
		{
			frnt = head;

			while (frnt != stp)
			{
				frnt = frnt->next;
				stp = stp->next;
			}

			return (frnt);
		}

		frnt = frnt->next;
		stp = (stp->next)->next;
	}

	return (NULL);
}
