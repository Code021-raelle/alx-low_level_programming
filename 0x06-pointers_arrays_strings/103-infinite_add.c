#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_string - Reverses a string in-place.
 * @str: The string to be reversed.
 */
void reverse_string(char *str)
{
	int length = strlen(str);
	int i, j;

	for (i = 0, j = length - 1; i < j; i++; j--)
	{
		char temp = str[i];

		str[i] = str[j];
		str[j] = temp;
	}
}

/**
 * infinite_add - Adds two numbers represented as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 * Return: A pointer to the result, or 0 if the result can't be stored.
 */
char infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int i = 0;

	while (*n1 != '\0' || *n2 != '\0' || carry != 0)
	{
		int digit1 = (*n1 != '\0') ? (*n1 - '0') : 0;
		int digit2 = (*n2 != '\0') ? (*n1 - '0') : 0;
		int sum = digit1 + digit2 + carry;

		if (i < size_r - 1)
		{
			r[i] = (sum % 10) + '0';
			carry = sum / 10;
			i++;
		}
		else
		{
			return (0);
		}

		if (*n1 != '\0')
			n1++;
		if (*n2 != '\0')
			n2++;
	}

	r[i] = '\0';
	reverse_string(r);
	return (r);
}

