#include "main.h"

/**
 * _puts - prints a string
 * @s: variable string
 *
 * Return: Always void
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar(10);
}

