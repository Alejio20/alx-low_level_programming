#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: double pointer to the start of the linked list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr, *tmp;

	if (head != NULL)
	{
		ptr = *head;
		tmp = *head;

		while (ptr != NULL)
		{
			tmp = tmp->next;
			free(ptr);
			ptr = tmp;
		}
		*head = NULL;
	}
}
