#include "main.c"
#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output.
 * @c: The character to be written
 */
void _putchar(char c)
{
	write(1, &c, 1);
}

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The input string.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}

