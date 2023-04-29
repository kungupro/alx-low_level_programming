#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a/
 * listint_t linked list
 * @head: points to the head of the list
 * @index: node's index from 0
 *
 * Return: nth node or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *curr = head;

	for (i = 0; curr && i < index ; i++)
	{
		curr = curr->next;
	}
	return (curr ? curr : NULL);
}
