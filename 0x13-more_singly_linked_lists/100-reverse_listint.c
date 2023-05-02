#include "lists.h"

/**
 * reverse_listint - reverses the linked list
 * @head: points to the first node
 *
 * Return: points to the head node of new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *curr = *head;

	while (curr)
	{
		listint_t *next = curr->next;

		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*head = prev;
	return (*head);
}
