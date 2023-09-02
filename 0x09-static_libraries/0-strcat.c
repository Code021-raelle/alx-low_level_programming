#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 * @dest: elements destination array.
 * @src: elements of the source array.
 *
 * Return: a string of characters.
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}

