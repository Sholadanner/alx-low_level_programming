#include "main.h"

/**
 * print_numbers - the function has a void return type
 *
 * Return: the return value is void
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');
	}
	_puchar('\n');
}
