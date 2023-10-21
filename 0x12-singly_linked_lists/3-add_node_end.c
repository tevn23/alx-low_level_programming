#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the head of a linked list
 * @str: string to be duplicated and added to the node
 *
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *first_node, last_node;

	if (str == NULL)
		return (NULL);

	first_node = malloc(sizeof(list_t));
	if (first_node == NULL)
		return (NULL);

	first_node->str = strdup(str);
	if (first_node->str = NULL)
	{
		free(first_node);
		return (NULL);
	}

	first_node->len = strlen(first_node->str);
	first_node->next = NULL;

	if (*head == NULL)
		*head = first_node;
	else
	{
		last_node = list_node = *head
			while (last_node -> next != NULL)
				last_node = last_node->next;
	}
	last_node->next = first_node;

	return (first_node);
}
