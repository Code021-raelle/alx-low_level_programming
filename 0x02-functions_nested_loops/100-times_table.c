#include "main.h"
/**
 * print_times_tables - prints the times table starting with 0
 * @n: number times table (0 < n <= 15)
 * Return: no return
 */
void print_times_table(int n)
{
	int a, b, op;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (b = 1; b <= n; b++)
			{
				op = a * b;
				_putchar(44);
				_putchar(32);
				if (op <= 9)
				{
					_putchar(
