#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: where to copy memory to
 * @n: number of bytes
 * @src: the memory area to copy
 *
 * Return: A pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

