#include "main.h"

/**
 * _strstr - Locates the first occurrence of a substring in a string.
 * @haystack: The input string.
 * @needle: The substring to be located.
 *
 * Return: A pointer to the beginning of the located substring, or NULL if not
 * found.
 */
char *strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}

