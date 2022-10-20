#include "lists.h"
#include <string.h>
#include <stddef.h>

/**
 * add_node_end - Adds a node to the end of a linked list
 * @head: Pointer to a pointer to the first item in the list
 * @str: Pointer to the string to be in the new node
 *
 * Return: Pointer to the added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t strlen;
	list_t *node = malloc(sizeof(list_t));
	list_t *tmp;

	if (node == NULL)
		return (NULL);

	if (str == NULL)
	{
		node->len = 0;
		node->str = NULL;
	}
	else
	{
		for (strlen = 0; str[strlen]; strlen++)
			;

		node->str = strdup(str);
		if (node->str == NULL)
		{
			free(node);
			return (NULL);
		}

		node->len = strlen;
	}
	node->next = NULL;

	if (*head != NULL)
	{
		for (tmp = *head; tmp->next != NULL; tmp = tmp->next)
			;
		tmp->next = node;
	}
	else
		*head = node;

	return (node);
}
