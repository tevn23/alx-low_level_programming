#include "lists.h"

/**
 * reverse_listint - reverse a listint_t linked list
 * @head: pointer to pointer to the head of the list
 *
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *back, *next, *current;

	back = NULL;
	next = NULL;
	current = *head;

	while (current != NULL)
	{
		next = current->next;
		current->next = back;
		back = current;
		current = next;
	}

	*head = back;
	return (*head);
}
