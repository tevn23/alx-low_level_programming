#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to a pointer to the head of the list
 * @n: value to be added to the new node
 *
 * Return: address of a new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first_node;

	first_node = malloc(sizeof(listint_t));

	if (first_node == NULL)
		return (NULL);

	first_node->n = n;
	first_node->next = *head;
	*head = first_node;

	return (first_node);
}
