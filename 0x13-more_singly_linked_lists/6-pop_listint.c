#include "lists.h"

/**
 * pop_listint - deletes the head mode of a listint_t linked list
 * @head: pointer to pointer to people
 *
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t temp;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;

	free(temp);

	return (data);
}


