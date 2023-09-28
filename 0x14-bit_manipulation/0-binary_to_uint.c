#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - convert a binary string to an unsigned integer.
 * @b: A pointer to a string
 *
 * Return: The converted unsigned integer, or 0 if an error occurs.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (int i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result = (result << 1) | (b[i] - '0');
	}
	return (result);
}

