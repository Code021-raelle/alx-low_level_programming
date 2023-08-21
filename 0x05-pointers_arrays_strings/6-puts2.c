#include "main.h"

/**
 * puts2 - Prints a string
 * @str: Variable string
 *
 * Return: Always void.
 */
void puts2(char *str)
{
	int len, n;
	char ch, *count;

	len = 0;
	count = str;
	while (*count != '\0')
	{
		count++;
		len++;
	}
	for (n = 0 ; n < len ; n++)
	{
		if (n % 2 == 0)
		{
			ch = *(str + n);
			_putchar(ch);
		}
	}
	_putchar(10);
}

