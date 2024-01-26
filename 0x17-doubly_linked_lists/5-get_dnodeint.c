#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: POinter to head of the list
 * @index: Index of the node
 *
 * Return: the nth of the node or NULL if node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *result;
	unsigned int i;

	result = head;

	if (head == NULL)
		return (NULL);
	/*Traversing through the entire list*/
	for (i = 0; result != NULL && i < index; i++)
	{
		result = result->next;
	}
	/*Checking if the node is within the parameters of the list*/
	if (i == index && result != NULL)
		return (result);
	return (NULL);

}
