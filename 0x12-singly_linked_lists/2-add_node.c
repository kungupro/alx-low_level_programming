#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node  - adds a new node
 * @head: - double  pointer to the list
 * @str: New string to be added
 * Return: Returns the new node
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	if (head == NULL || str == NULL)
		return (NULL);

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
