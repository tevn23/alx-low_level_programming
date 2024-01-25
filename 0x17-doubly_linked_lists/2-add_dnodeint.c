#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of the list
 * @head: Pointer to head of the list
 * @n: Value to be stored in new node
 *
 * Return: Address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
	return (NULL);

	/*Dynamically allocting memory for the new node*/
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	return (NULL);

	/*Initialising the node*/
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	/*If there is an existing node we add the new node in its prev pointer*/
	if (*head != NULL)
	(*head)->prev = new_node;

	/*Else we just add the new node as the head*/
	*head = new_node;

	return (new_node);
}
