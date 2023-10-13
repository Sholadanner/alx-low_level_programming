#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that sums arguments passed
 * as numbers
 * @n: the number of arguments to be added
 * Return: the summed numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list(arg);
	unsigned int i, sum = 0;

	va_start(arg, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(arg, int);

	va_end(arg);

	if (n == 0)
		return (0);

	return (sum);
}
