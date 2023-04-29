#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: - double pointer to the list to be deleleted;
 *
 * Return: the head node’s data
 */
int pop_listint(listint_t **head)
{
	int numb;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	numb = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (numb);

}
