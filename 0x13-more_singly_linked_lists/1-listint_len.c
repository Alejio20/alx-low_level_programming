#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the linked list
 * Return: the number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (1);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
