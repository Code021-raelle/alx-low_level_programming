#include "main.h"

/**
 * factorial - function that return length of a string.
 * @n: integer factorial.
 *
 * Return: factorial number.
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

