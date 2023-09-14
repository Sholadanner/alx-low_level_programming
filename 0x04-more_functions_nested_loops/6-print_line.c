#include "main.h"

/**
 * print_line - has a void data type
 *
 * @n: the value to determine if the line should print
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
			_putchar('_');
		else
			_putchar('\n');
	}
	_putchar('\n');
}
