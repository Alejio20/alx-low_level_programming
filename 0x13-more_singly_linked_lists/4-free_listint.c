#include "lists.h"

/**
 * free_listint - frees a listint list
 * @head: pointer of the linked list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	ptr = head;

	while (ptr != NULL)
	{
		head = head->next;
		free(ptr);
		ptr = head;
	}
}
