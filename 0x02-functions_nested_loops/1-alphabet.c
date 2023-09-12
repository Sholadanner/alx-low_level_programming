#include "main.h"

/**
 * print_alphabet - data type for this function is void 
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
