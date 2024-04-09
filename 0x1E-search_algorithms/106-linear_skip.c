#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * linear_skip - Searches for a value in a sorted skip list of integers
 * @list: Pointer to the head of the skip list to search in
 * @value: Value to search for
 *
 * Return: Pointer to first node where value is located or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *prev;

	if (list == NULL)
		return (NULL);

	current = list;
	while (current != NULL && current->n < value)
	{
		prev = current;
		if (current->express != NULL && current->express->n <= value)
		{
			printf("Value checked at index [%lu] = [%d]\n",
				current->express->index, current->express->n);
			current = current->express;
		}
		else
		{
			printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
			current = current->next;
		}
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			prev->index, current->index);

	while (prev != NULL && prev->index <= current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}

