#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the head of the linked list
 * @str: string to be duplicated and stored in the added node
 *
 * Return: address of a new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	char *dup_str;

	if (str == NULL)
		return (NULL);

	dup_str = strdup(str);
	if (dup_str == NULL)
		return (NULL);

	node = malloc(sizeof(list_t));

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	node->str = dup_str;
	node->len = strlen(dup_str);
	node->next = *head;
	*head = node;

	return (node);
}

