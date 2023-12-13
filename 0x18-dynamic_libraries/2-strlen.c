#include "main.h"

/**
 * _strlen - count the numbers of characters in a string
 * @s: variable string
 *
 * Return: Always void.
 */
int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	return (n);
}

