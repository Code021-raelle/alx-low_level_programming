#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: the unsigned long integer to extract the bit from
 * @index: the index of the bit to get (0-based)
 *
 * Return: the value of the bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	unsigned long int mask = 1UL << index;

	if ((n & mask) == 0)
		return (0);
	else
		return (1);
}

