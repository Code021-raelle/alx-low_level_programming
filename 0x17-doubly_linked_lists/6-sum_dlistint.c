#include "lists.h"

/**
 * sum_dlistint - sums the data of a linked list
 * @head: first element of linked list
 *
 * Return: 0 if empty, otherwise sum
 */
int sum_dlistint(dlsitint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

