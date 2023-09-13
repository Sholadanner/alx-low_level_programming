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
	char i;
	int n;

	for (n = 0; n <= 9; n++)
	{
		for (i = 'a'; i = 'z'; i++)
		{
			_putchar (i);
		}
		_putchar ('\n');
	}

}
