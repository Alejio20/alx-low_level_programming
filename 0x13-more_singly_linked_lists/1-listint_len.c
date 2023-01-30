#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the linked list
 * Return: the number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (1);

	size_t count = 0;
	listint_t *ptr = NULL;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
