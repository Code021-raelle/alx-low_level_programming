#include <stdio.h>
#include <stdlib.h>

/**
 * main - program give the amount of cents.
 * @argc: number of command lines arguments.
 * @argv: character of arrays.
 *
 * Return: 0 for success or 1 for error.
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int cents[5] = {25, 10, 5, 2, 1};
	unsigned long int num = 0;
	unsigned long int n_cents[5] = {0};
	unsigned long int result = 0;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}
	if (argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	for (i = 0; i <= 4; i++)
	{
		n_cents[i] = num / cents[i];
		num = num % cents[i];
	}
	result = n_cents[0] + n_cents[1] + n_cents[2] + n_cents[3] + n_cents[4];
	printf("%lu\n", result);
	return (0);
}

