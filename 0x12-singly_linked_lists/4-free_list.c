#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: list to be freed
 *
 *
 */
void free_list(list_t *head)
{
	list_t *curr = head;
	list_t *next;

	while (curr)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}

}
