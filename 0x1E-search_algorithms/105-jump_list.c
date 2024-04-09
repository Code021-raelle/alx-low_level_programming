#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_list - Searches for a value in a sorted list of integers
 *             using the Jump search algorithm
 * @list: Pointer to the head of the list to search in
 * @size: Number of nodes in list
 * @value: Value to search for
 *
 * Return: Pointer to first node where value is located or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, prev_idx;
	listint_t *current, *prev;

	if (list == NULL || size == 0)
		return (NULL);

	jump = sqrt(size);
	prev_idx = 0;
	current = list;
	while (current->n < value && current->next != NULL)
	{
		prev = current;
		for (size_t i = 0; i < jump && current->next != NULL; i++)
		{
			prev = current;
			current = current->next;
		}
		printf("Value checked at index [%lu] = [%d]\n",
				current->index, current->n);
		prev_idx = current->index;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			prev_idx, current->index);
	printf("Value checked at index [%lu] = [%d]\n", prev_idx, prev->n);
	while (prev->index < current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}

