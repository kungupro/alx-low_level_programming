#include "lists.h"

/**
 * add_nodeint - adds a new node in the list
 * @head: double pointer to the list
 * @n: number of elements
 * Return: the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node_x;

	node_x = malloc(sizeof(listint_t));

	if (node_x == NULL)
	{
		return (NULL);
	}
	node_x->n = n;
	node_x->next = *head;
	*head = node_x;

	return (node_x);
}
