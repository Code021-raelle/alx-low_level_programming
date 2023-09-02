#include "main.h"

/**
 * _strlen - Count the numbers of characters in a string.
 * @p: variable string.
 *
 * Return: Always void.
 */
int _strlen(char *p)
{
	int n = 0;

	while (*p != '\0')
	{
		n++;
		p++;
	}
	return (n);
}

