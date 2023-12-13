#include "main.h"

/**
 * _islower - function to check for lowercase character
 * @c: argument of the function
 *
 * Return: 1 if lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}

