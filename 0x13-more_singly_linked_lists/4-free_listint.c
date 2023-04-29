#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: points to the string to be freed
 *
 */

void free_listint(listint_t *head)
{
	listint_t *curr;

	while (head)
	{
		curr = head;
		head = head->next;
		free(curr);
	}
}
