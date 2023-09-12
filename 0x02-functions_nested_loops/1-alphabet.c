#include "main.h"

/**
 * main - the main function for this code is of type int
 *
 * Return: the return value is void
 *
 * This code aims to print the alphabet
 */

void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar (a);
	}
	_putchar ('\n');
}
