#include "lists.h"

/**
 * print_listint - 
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor)
	{
		printf("%d\n", cursor->n);
		++count;
		cursor = cursor->next;
	}

	return count;
}
