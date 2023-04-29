#include "lists.h"

/**
 * sum_listint - returns the sum of all the data
 * @head: points to the head of the list
 *
 * Return: sum of all the data or 0 otherwise
 */

int sum_listint(listint_t *head)
{
	int res;
	listint_t *tmp = head;

	for (res = 0 ; tmp ; )
	{
		res += tmp->n;
		tmp = tmp->next;
	}
	return (res);
}
