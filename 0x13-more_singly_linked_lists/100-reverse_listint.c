#include "lists.h"

/**
 * reverse_listint - reverses the linked list
 * @head: points to the first node
 *
 * Return: points to the head node of new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = pre;
		pre = (*head);
		(*head) = next;
	}
	(*head) = pre;
	return (*head);
}
