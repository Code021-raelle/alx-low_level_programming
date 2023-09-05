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
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	int total_length = 0;

	for (int i = 0; i < ac; i++)
	{
		char *arg = av[i];

		while (*arg)
		{
			total_length++;
			arg++;
		}
		total_length++;
	}

	char *concatenated = (char *)malloc(total_length + 1);

	if (concatenated == NULL)
	{
		return (NULL);
	}

	int position = 0;

	for (int i = 0; i < ac; i++)
	{
		char *arg = av[i];

		while (*arg)
		{
			concatenated[position] = *arg;
			position++;
			arg++;
		}
		concatenated[position] = '\n';
		position++;
	}

	concatenated[total_length] = '\0';

	return (concatenated);
}

