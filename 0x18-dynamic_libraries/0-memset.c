#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: array buffer
 * @b: constant byte
 * @n: number of bytes of memory
 *
 * Description: fill the first `n` bytes of the memory area pointed to by `s`
 *              with the constant byte `b`.
 * Return: pointer to memory area `s`
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		s[count] = b;
		count++;
	}

	return (s);
}

