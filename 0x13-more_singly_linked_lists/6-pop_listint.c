#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node's data
 * @head: double pointer to the linked list
 * Return: the head node's data or 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *ptr, *tmp;

	if (*head == NULL)
		return (0);

	ptr = *head;

	tmp = ptr->next;

	n = ptr->n;

	free(ptr);

	*head = tmp;

	return (n);
}
