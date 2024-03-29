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
	unsigned int i;
	listint_t *tmp;
	listint_t *ptr;

	ptr = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && ptr != NULL; i++)
			ptr = ptr->next;
	}

	if (ptr == NULL && idx != 0)
		return (NULL);

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = n;

	if (idx == 0)
	{
		tmp->next = *head;
		*head = tmp;
	}
	else
	{
		tmp->next = ptr->next;
		ptr->next = tmp;
	}

	return (tmp);
}
