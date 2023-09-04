#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Function that concatenates two strings
 * @s1: string 1.
 * @s2: string 2.
 *
 * Return: pointer to the array, NULL if size is 0 or fails.
 */
char *str_concat(char *s1, char *s2)
{
	char *strDup;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	strDup = malloc(sizeof(char) * (i + j + 1));
	if (strDup == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		strDup[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		strDup[i] = s2[j];
		i++, j++;
	}
	strDup[i] = '\0';
	return (strDup);
}

