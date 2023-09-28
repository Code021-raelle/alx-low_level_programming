#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: a pointer to the unsigned long integer to modify
 * @index: the index of the bit to set (0-based)
 *
 * Return: 1 if it worked, or -1 if an error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	unsigned long int mask = 1UL << index;

	*n |= mask;

	return (1);
}

