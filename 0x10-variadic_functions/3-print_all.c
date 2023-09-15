#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * chk_char - prints the char character
 * @list: the type
 * Return: nothing
 */
void chk_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * chk_int - prints the int
 * @list: the type
 * Return: nothing
 */
void chk_int(va_list list)
{
	printf("%i", va_arg(list, int));
}
/**
 * chk_float - prints the float
 * @list: the type
 * Return: nothing
 */
void chk_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * chk_string - prints the string
 * @list: the type
 * Return: nothing
 */
void chk_string(va_list list)
{
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list printall;
	unsigned int x = 0, y, e = 0;
	char *put;
	const char s_arg[] = "cifs";

	va_start(printall, format);
	while (format && format[x])
	{
		y = 0;
		while (s_arg[y])
		{
			if (format[x] == s_arg[y] && e)
			{
				printf(", ");
				break;
			} y++;
		}
		switch (format[x])
		{
			case 'c':
				printf("%c", va_arg(printall, int)), e = 1;
				break;
			case 'i':
				printf("%d", va_arg(printall, int)), e = 1;
				break;
			case 'f':
				printf("%f", va_arg(printall, double)), e = 1;
				break;
			case 's':
				put = va_arg(printall, char*), e = 1;
				if (!put)
				{
					printf("(nil)");
					break;
				}
				printf("%s", put);
				break;
		} x++;
	}
	printf("\n"), va_end(printall);
}

