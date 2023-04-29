#include "lists.h"

/**
 * add_nodeint_end - add node to the string end
 * @head: double pointer to the string
 * @n: number of elements
 * Return: the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_y;

	node_y = malloc(sizeof(listint_t));

	if (node_y == NULL)
	{
		return (NULL);
	}
	node_y->n = n;
	node_y->next = NULL;

	if (*head == NULL)
	{
		*head = node_y;
	}
	else
	{
		listint_t *last_node = *head;

		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = node_y;
	}
	return (node_y);
}
