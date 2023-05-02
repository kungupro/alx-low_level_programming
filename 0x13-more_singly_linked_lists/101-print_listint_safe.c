#include "lists.h"

/**
 * print_listint_safe - Prints a linked list
 * @head: Points to the head node of the list
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *curr = head;
	const listint_t *next;
	size_t count;

	for (count = 0; curr ; count++)
	{
		printf("[%p] %d\n", (void *)curr, curr->n);

		next = curr->next;

		if (next >= curr)
		{
			printf("-> [%p] %d\n", (void *)next, next->n);

			break;
		}
		curr = next;
	}
	return (count);


}
