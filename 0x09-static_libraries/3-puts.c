#include "main.h"

/**
 * _puts - prints a string.
 * @str: variable string.
 *
 * Return: always void.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}

