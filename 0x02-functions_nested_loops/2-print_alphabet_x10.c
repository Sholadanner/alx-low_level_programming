#include "main.h"

/**
 * print_alphabet_x10 - the function has a void data type
 *
 * Return: the return value is void
 *
 * The code aims to print the alphabet ten times
 */

void print_alphabet_x10(void)
{
	int i;
	int n;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (n = 0; n <= 10; n++)
		{
			_putchar (i);
		}
	}
	_putchar ('\n');
}
