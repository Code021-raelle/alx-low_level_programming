#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: String literal to print reverse.
 *
 * Return: Always void.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		s--;
	}
	else
	{
		_print_rev_recursion(++s);
		s--;
		_putchar(*s);
	}
}

