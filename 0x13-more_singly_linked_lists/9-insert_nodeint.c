#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: no of elements of the new node
 *
 * Return: address of the new node, or NULL otherwise
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j = 0;
	listint_t *node_z;
	listint_t *curr = *head;

	node_z = malloc(sizeof(listint_t));

	if (node_z == NULL || head == NULL)
	{
		return (NULL);
	}
	node_z->n = n;
	node_z->next = NULL;

	if (idx == 0)
	{
		node_z->next = *head;
		*head = node_z;
		return (node_z);
	}
	for (j = 0; curr && j < idx; j++)
	{
		if (j == idx - 1)
		{
			node_z->next = curr->next;
			curr->next = node_z;
			return (node_z);
		}
		else
		{
			curr = curr->next;
		}

	}
	return (NULL);

}
