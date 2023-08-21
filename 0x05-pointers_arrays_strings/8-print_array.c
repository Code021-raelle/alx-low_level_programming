#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints element of array
 * @a: array name
 * @n: elements of the array
 *
 * Return: Always not.
 * */
void Print_array(int *a, int n)
{
	int x;

	for (x = 0 ; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

