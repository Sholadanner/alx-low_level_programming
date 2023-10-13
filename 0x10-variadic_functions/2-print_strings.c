#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings
 * @separator: string that separates the printed strings
 * @n: number of strings passed as argument
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;

	unsigned int i;
	const char *str;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arg, const char *);
		printf("%s", str);

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
