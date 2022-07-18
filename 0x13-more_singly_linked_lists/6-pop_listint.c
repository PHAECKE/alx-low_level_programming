#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t list.
 * @head: d pointer to the address of the
 * head of the listint_t list.
 *
 * Return: If the linked list is empty - 0.
 * therwise - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int stp;

	if (*head == NULL)
		return (0);

	temp = *head;
	stp = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (stp);
}
