#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of the program.
 * @ac: The argument count.
 * @av: The argument vector.
 *
 * Returns: A pointer to the concatenated string or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j;
	int k = 0;
	int m_total = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++)
		{
			continue;
		}
		m_total += j;
	}
	ptr = malloc(sizeof(char) * (m_total + ac + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[k] = av[i][j];
			k++;
		}
		ptr[k] = '\n';
		k++;
	}
	return (ptr);
}

