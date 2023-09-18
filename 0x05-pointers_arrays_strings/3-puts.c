#include "main.h"

/**
 * _puts - printing a string
 *
 * Return: voud
 *
 * @str: string to be printed
 */

void _puts(char *str)
{
	int a;

	for (a =0; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
