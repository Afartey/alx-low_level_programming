#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to a pointer to the head of the list
 * @n: integer to store in the new node
 *
 * Return: address of the new node, or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, int n)
{
	listint_t *new_node = NULL;

	if (!head)
		return NULL;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return NULL;

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return new_node;
}
