#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: double pointer to the linked list
 * @n: integer to be added
 * Return: the address of the new element or NULL, if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *tmp;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;

	ptr = *head;

	if (ptr == NULL)
		return (NULL);
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;

		ptr->next = tmp;
	}
	return (*head);
}
