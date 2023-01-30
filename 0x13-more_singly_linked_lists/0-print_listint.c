#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to linked list to be printed
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	if (h == NULL)
		return (0);

	size_t count = 0;
	listint_t *ptr = NULL;
	ptr = h;

	while (h)
	{
		count++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (count);
}
