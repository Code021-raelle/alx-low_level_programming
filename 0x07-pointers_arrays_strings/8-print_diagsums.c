#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix.
 * @a: pointer to the first element of the matrix.
 * @size: The size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
	int i, diag1_sum = 0, diag2_sum = 0;

	for (i = 0; i < size; i++)
	{
		diag1_sum += a[i * size + i];
		diag2_sum += a[i * size + (size - i - 1)];
	}

	printf("Sum of main diagonal: %d\n", diag1_sum);
	printf("Sum of secondary diagonal: %d\n", diag2_sum);
}

