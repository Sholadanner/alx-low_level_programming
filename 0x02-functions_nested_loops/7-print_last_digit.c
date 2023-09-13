#include "main.h"

/**
 * print_last_digit - type int
 *
 * Return: b
 *
 * @a: function parameter
 */

int print_last_digit(int a)
{
	int b;

	b = a % 10;
	if (b < 0)
		b = -b;
	_putchar (b = '0');
	return (b);
}

