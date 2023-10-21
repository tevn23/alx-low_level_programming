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
	list_t *last_node, *temp;

	last_node = malloc(sizeof(list_t));
	if (last_node == NULL)
		return (NULL);

	last_node->str = strdup(str);
	if (last_node->str == NULL)
	{
		free(last_node);
		return (NULL);
	}

	last_node->len = strlen(last_node->str);
	last_node->next = NULL;

	if (*head == NULL)
	{
		*head = last_node;
	}
	else
	{
		temp = *head;

		while (temp->next != NULL)
			temp = temp->next;
		temp->next = last_node;
	}

	return (last_node);
}
