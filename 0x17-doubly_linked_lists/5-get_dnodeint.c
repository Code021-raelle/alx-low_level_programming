#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at index
 * @head: first node of linked list
 * @index: index at which to find the node
 *
 * Return: the address of wanted node, or NULL if not within list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL && i < index; i++)
		head = head->next;

	if (i == index)
		return (head);

	return (NULL);
}

