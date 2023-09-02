#include "main.h"

/**
 * *_strncat - function that concatenates two strings, at most n bytes of src.
 * @dest: elements destination array.
 * @src: elements of the source array.
 * @n: Amount of bytes of src array.
 *
 * Return: string of characters.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
	_putchar('\n');
}

