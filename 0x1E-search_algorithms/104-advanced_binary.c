#include "search_algos.h"
#include <stdio.h>

/**
 * advanced_binary_recursive - Searches for a value in a sorted array of
 *                             integers using the binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @low: Lower bound of the search range
 * @high: Upper bound of the search range
 * @value: Value to search for
 *
 * Return: Index where @value is located or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	if (low <= high)
	{
		mid = (low + high) / 2;

		printf("Searching in array: ");
		for (size_t i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
		{
			if (mid == 0 || array[mid - 1] != value)
				return (mid);
			else
				return (advanced_binary_recursive(
						array, low, mid, value));
		}
		else if (array[mid] < value)
			return (advanced_binary_recursive(
						array, mid + 1, high, value));
		else
			return (advanced_binary_recursive(
						array, low, mid - 1, value));
	}

	return (-1);
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 *                   using the binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in @array
 * @value: Value to search for
 *
 * Return: Index where @value is located or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}

