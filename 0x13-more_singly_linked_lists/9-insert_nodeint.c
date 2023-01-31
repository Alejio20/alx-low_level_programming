#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the linked list
 * @idx: index of the linked list starts from 0
 * @n: integer to be added to the linked list
 * Return: the adrress of the new node or NULL, if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint *ptr, *tmp;
	unsigned int i;

	if (*head == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;

	ptr = *head;

	for (i = 0; i < idx && ptr != NULL; i++)
	{
		ptr = ptr->next;
	}

	tmp->next = ptr->next;

	ptr->next = tmp;

	ptr = *head;

	return (*head);
}
