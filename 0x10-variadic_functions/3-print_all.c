#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that can print different types
 * @format: number of arguments
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list arg;

	int printed = 0;
	char current_format;
	char *separator = "";
	char *str;

	va_start(arg, format);
	while (format && format[printed])
	{
		current_format = format[printed];
		switch (current_format)
		{
			case 'c':
				printf("%s%c", separator, va_arg(arg, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(arg, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(arg, double));
				break;
			case 's':
				{
					str = va_arg(arg, char*);

					if (str == NULL)
						printf("%s(nil)", separator);
					if (str != NULL)
						printf("%s%s", separator, str);
				}
				break;
		}
		separator = ", ";
		printed++;
	}
	printf("\n");
	va_end(arg);
}
