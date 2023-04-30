#include "lists.h"

/**
 * delete_nodeint_at_index -deletes the node at index index
 * @head: - points to the first element in the list
 * @index: index of the node to be deleted
 *
 * Return: 1 (Success), or -1 otherwise
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j;
	listint_t *curr = *head;
	listint_t *tmp;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = curr->next;
		free(curr);
		return (1);
	}
	for (j = 0; j < index - 1; j++)
	{
		curr = curr->next;

		if (curr == NULL)
		{
			return (-1);
		}
	}
	tmp = curr->next;

	if (tmp == NULL)
	{
		return (-1);
	}
	curr->next = tmp->next;
	free(tmp);

	return (1);

}
