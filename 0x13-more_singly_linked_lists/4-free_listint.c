#include "lists.h"

/**
 * free_listint - frees a listint list
 * @head: pointer of the linked list
 * Return: void
 */

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		head = head->next;
		free(head);
	}
}
